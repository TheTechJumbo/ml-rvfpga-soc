`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/02/2021 02:53:47 PM
// Design Name: 
// Module Name: swervolf_syscon
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module swervolf_syscon #(
    parameter COUNT_MAX = 20
)(
    input wire i_clk,
    input wire i_rst,
    input wire gpio_irq,
    input wire ptc_irq,
    output reg o_timer_irq,
    input wire i_ram_init_done,
    input wire i_ram_init_error,
    output reg [31:0] o_nmi_vec,
    output wire o_nmi_int,
    output wire o_sw_irq3,
    output wire o_sw_irq4,

    input wire [31:0] i_wb_adr,
    input wire [31:0] i_wb_dat,
    input wire [3:0] i_wb_sel,
    input wire i_wb_we,
    input wire i_wb_cyc,
    input wire i_wb_stb,
    output reg o_wb_ack,
    output reg [31:0] o_wb_rdt,

    output wire [7:0] AN,
    output wire [6:0] SEG,
    output wire [6:0] Digits_Bits
);

    reg [63:0] mtime;
    reg [63:0] mtimecmp;

    reg sw_irq3;
    reg sw_irq3_edge;
    reg sw_irq3_pol;
    reg sw_irq3_timer;
    reg sw_irq4;
    reg sw_irq4_edge;
    reg sw_irq4_pol;
    reg sw_irq4_timer;

    reg irq_timer_en;
    reg [31:0] irq_timer_cnt;

    reg irq_gpio_enable;
    reg irq_ptc_enable;

    reg nmi_int;
    reg nmi_int_r;

    wire n_rst = ~i_rst;

    assign o_nmi_int = nmi_int | nmi_int_r;
    assign Digits_Bits = SEG;
    assign o_sw_irq3 = sw_irq3 ^ sw_irq3_pol;
    assign o_sw_irq4 = sw_irq4 ^ sw_irq4_pol;

    wire [COUNT_MAX-1:0] countSelection;
    reg [31:0] Digits_Reg;
    reg [7:0] Enables_Reg;

    wire [7:0] enable [7:0];
    assign enable[0] = (Enables_Reg | 8'hfe);
    assign enable[1] = (Enables_Reg | 8'hfd);
    assign enable[2] = (Enables_Reg | 8'hfb);
    assign enable[3] = (Enables_Reg | 8'hf7);
    assign enable[4] = (Enables_Reg | 8'hef);
    assign enable[5] = (Enables_Reg | 8'hdf);
    assign enable[6] = (Enables_Reg | 8'hbf);
    assign enable[7] = (Enables_Reg | 8'h7f);

    wire [63:0] enable_flat = {
        enable[7], enable[6], enable[5], enable[4],
        enable[3], enable[2], enable[1], enable[0]
    };

    SevSegDisplays_Controller #( .COUNT_MAX(COUNT_MAX) ) display_controller (
        .clk(i_clk),
        .rst_n(n_rst),
        .Enables_Reg(Enables_Reg),
        .Digits_Reg(Digits_Reg),
        .AN(AN),
        .Digits_Bits(SEG),
        .enable_flat(enable_flat),
        .countSelection(countSelection)
    );

    always @(posedge i_clk) begin
        o_wb_ack <= i_wb_cyc & !o_wb_ack;

        nmi_int   <= 1'b0;
        nmi_int_r <= nmi_int;

        if (irq_gpio_enable & gpio_irq)
            sw_irq4 <= 1'b1;

        if (irq_ptc_enable & ptc_irq)
            sw_irq3 <= 1'b1;

        if (!irq_gpio_enable & !irq_ptc_enable) begin
            if (sw_irq3_edge)
                sw_irq3 <= 1'b0;
            if (sw_irq4_edge)
                sw_irq4 <= 1'b0;
            if (irq_timer_en)
                irq_timer_cnt <= irq_timer_cnt - 1;
            if (irq_timer_cnt == 32'd1) begin
                irq_timer_en <= 1'b0;
                if (sw_irq3_timer)
                    sw_irq3 <= 1'b1;
                if (sw_irq4_timer)
                    sw_irq4 <= 1'b1;
                if (!(sw_irq3_timer | sw_irq4_timer))
                    nmi_int <= 1'b1;
            end
        end

        if (i_wb_cyc & i_wb_stb & i_wb_we & !o_wb_ack) begin
            case (i_wb_adr[5:2])
                6'h0e: Enables_Reg <= i_wb_dat[7:0];
                6'h0f: Digits_Reg <= i_wb_dat;
                default: ;
            endcase
        end

        mtime <= mtime + 1;
        o_timer_irq <= (mtime >= mtimecmp);

        if (n_rst) begin
            mtime <= 64'd0;
            mtimecmp <= 64'd0;
            o_wb_ack <= 1'b0;
        end
    end

endmodule
