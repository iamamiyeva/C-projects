#include <stdio.h>
#include <stdint.h>

// BIT ROTATION

uint32_t rotate_left(uint32_t n, uint32_t x)
{
    x %= 32; // 32'den uly san girizilese ye x-32 logigi bn dowam etmegu uci (33 girse 1 dp almaly, 35 girse 3 dp almaly...)
    if (x == 0)
        return n;
    else
    {
        return n << x | n >> (32 - x);
    }
}

uint32_t rotate_right(uint32_t n, uint32_t x)
{
    x %= 32;
    if (x == 0)
        return n;
    else
    {
        return n >> x | n << (32 - x);
    }
}

int main()
{
    printf("%u\n", rotate_left(0x80000000, 4));
    printf("%u\n", rotate_right(16, 2));
    return 0;
}