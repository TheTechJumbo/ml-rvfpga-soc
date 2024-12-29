// memory-mapped I/O addresses

# GPIO_SWs   = 0x80001400
# GPIO_LEDs  = 0x80001404
# GPIO_INOUT = 0x80001408

.globl main
main:

main:
    li t0, 0x80001400 # base address of GPIO memory-mapped registers
    li t1, 0xFFFF     # set directiom of GPIO_SWs
                      # upper half = switches (inputs)
                      # lower half = LEDs (outputs)
    sw t1, 8(t0)      # GPIO_INOUT = 0xFFFF

repeat:
    lw   t1, 0(t0)    # read switches: t1 = GPIO_SWs
    srli t1, t1, 16   # write to LEDs
    # not t1, t1        # invert the value - only change from ReadSwitches.S
    sw   t1, 4(t0)    # write value to LEDs: GPIO_LEDs = t1
    j    repeat       # loop forever
