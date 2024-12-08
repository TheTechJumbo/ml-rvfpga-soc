/* The project is configured to use the Nexys4DDR board.
memory-mapped I/O addresses for the switches, LEDs, and GPIO direction register. */
/* Write a C program that displays the inverse value of the switches on the LEDs.
For example, if the switches are (in binary): 0101010101010101, then the LEDs should
display: 1010101010101010; if the switches are: 1111000011110000, then the LEDs should
display: 0000111100001111; and so on.*/
#define GPIO_SWs 0x80001400
#define GPIO_LEDs 0x80001404
#define GPIO_INOUT 0x80001408
#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main ( void )
{
    int En_Value=0xFFFF, switches_value;
    WRITE_GPIO(GPIO_INOUT, En_Value);

    while (1) {
        switches_value = READ_GPIO(GPIO_SWs); // read value on switches
        switches_value = switches_value >> 16; // shift into lower 16 bits
        switches_value = ~switches_value; // invert the value
        WRITE_GPIO(GPIO_LEDs, switches_value); // display switch value on LEDs
    }

    return(0);

}