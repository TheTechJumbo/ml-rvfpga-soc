// memory-mapped I/O addresses

# GPIO_SWs = 0x80001400
# GPIO_LEDs = 0x80001404
# GPIO_INOUT = 0x80001408

.globl main
main:

main:
    li t0, 0x80001400 # base address of GPIO memory-mapped registers
    li t1, 0xFFFF # set direction of GPIO_SWs
    # upper half = switches (inputs)
    # lower half = LEDs (outputs)
    sw t1, 8(t0) # GPIO_INOUT = 0xFFFF

repeat:
    lw t1, 0(t0) # read switches: t1 = GPIO_SWs
    srli t1, t1, 16 # write to LEDs
    sw t1, 4(t0) # write value to LEDs: GPIO_LEDs = t1
    # create some sort of delay
    li t3, 20000000 # delay
    delay:
        addi t3, t3, -1
        bnez t3, delay
    not t1, t1 # invert value
    sw t1, 4(t0) # write value to LEDs: GPIO_LEDs = t1
    li t4, 4000000 # delay
    delay_second:
        addi t4, t4, -1
        bnez t4, delay_second
    j repeat # loop forever
