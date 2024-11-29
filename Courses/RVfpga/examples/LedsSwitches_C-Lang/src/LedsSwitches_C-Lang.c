#define GPIO_SWs    0x80001400 //address for reading state of switches
#define GPIO_LEDs   0x80001404 //address for writing state of LEDs
#define GPIO_INOUT  0x80001408 //address for setting direction of GPIO

#define READ_GPIO(dir) (*(volatile unsigned *)dir) //reads value from a given address
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); } //writes value to a given address

int main ( void )
{
    int En_Value=0xFFFF, switches_value; //initializes En_Value to 0xFFFF and switches_value, enabling all the GPIO pins

    WRITE_GPIO(GPIO_INOUT, En_Value); //sets the direction of the GPIO pins

    while (1) { 
        switches_value = READ_GPIO(GPIO_SWs); //reads the value of the switches
        switches_value = switches_value >> 16; //shifts the value into the lower 16 bits
        WRITE_GPIO(GPIO_LEDs, switches_value); //writes the switch value to the LEDs
    }

    return(0);
}