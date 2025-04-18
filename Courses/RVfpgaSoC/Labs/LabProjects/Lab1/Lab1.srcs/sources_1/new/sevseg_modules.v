module SevSegDisplays_Controller #(
    parameter COUNT_MAX = 20
)(
    input wire clk,
    input wire rst_n,
    input wire [7:0] Enables_Reg,
    input wire [31:0] Digits_Reg,
    input wire [63:0] enable_flat,
    input wire [COUNT_MAX-1:0] countSelection,
    output wire [7:0] AN,
    output wire [6:0] Digits_Bits
);

    wire [2:0] sel_index = countSelection[COUNT_MAX-1:COUNT_MAX-3];
    wire [7:0] enables_muxed;
    wire [3:0] digit_muxed;

    // Mux for enable signals
    assign enables_muxed = enable_flat >> (sel_index * 8);

    // Mux for digit segments
    assign digit_muxed =
        (sel_index == 3'd0) ? Digits_Reg[3:0] :
        (sel_index == 3'd1) ? Digits_Reg[7:4] :
        (sel_index == 3'd2) ? Digits_Reg[11:8] :
        (sel_index == 3'd3) ? Digits_Reg[15:12] :
        (sel_index == 3'd4) ? Digits_Reg[19:16] :
        (sel_index == 3'd5) ? Digits_Reg[23:20] :
        (sel_index == 3'd6) ? Digits_Reg[27:24] :
                              Digits_Reg[31:28];

    assign AN = enables_muxed;

    SevenSegDecoder decoder (
        .data(digit_muxed),
        .seg(Digits_Bits)
    );

endmodule


module SevenSegDecoder(
    input wire [3:0] data,
    output reg [6:0] seg
);
    always @(*) begin
        case(data)
            4'h0: seg = 7'b0000001;
            4'h1: seg = 7'b1001111;
            4'h2: seg = 7'b0010010;
            4'h3: seg = 7'b0000110;
            4'h4: seg = 7'b1001100;
            4'h5: seg = 7'b0100100;
            4'h6: seg = 7'b0100000;
            4'h7: seg = 7'b0001111;
            4'h8: seg = 7'b0000000;
            4'h9: seg = 7'b0001100;
            4'hA: seg = 7'b0001000;
            4'hB: seg = 7'b1100000;
            4'hC: seg = 7'b1110010;
            4'hD: seg = 7'b1000010;
            4'hE: seg = 7'b0110000;
            4'hF: seg = 7'b0111000;
            default: seg = 7'b1111111;
        endcase
    end
endmodule
