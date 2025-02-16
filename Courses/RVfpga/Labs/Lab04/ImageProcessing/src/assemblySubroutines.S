# Function: ColourToGrey_Pixel
# Purpose: Converts a color pixel to a grayscale pixel.
# Input: a0 = red component, a1 = green component, a2 = blue component
# Output: a0 = grayscale value
.globl ColourToGrey_Pixel

    li x28, 306
    mul a0, a0, x28

    li x29, 601
    mul a1, a1, x29

    li x30, 117
    mul a2, a2, x30
    mul a1, a1, x28

    li x28, 117
    mul a2, a2, x28

    add a0, a0, a1
    add a0, a0, a2

    srl a0, a0, 10

ret

