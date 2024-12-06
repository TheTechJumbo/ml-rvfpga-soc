#define GPIO_LEDs 0x80001404
#define GPIO_INOUT 0x80001408
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

void delay(int n) {
    volatile int i;
    for (i = 0; i < n; i++) {
        ;
    }
}

int main(void) {
    int on = 0xFFFF; // Start with all LEDs on
    WRITE_GPIO(GPIO_INOUT, on); // Set GPIO direction

    while (1) {
        WRITE_GPIO(GPIO_LEDs, on); // Turn on LEDs
        delay(5000000); // Add a noticeable delay
        on = ~on; // Invert the state
        WRITE_GPIO(GPIO_LEDs, on); // Write inverted state
        delay(5000000); // Another noticeable delay
    }

    return 0; // kinda redundant icl
}
