#include <stdio.h>
#include <stdint.h>

uint32_t print_binary(uint32_t n)
{
    printf("0b");
    for (int i = 7; i >= 0; i--)
    {
        uint32_t bit = (n >> i) & 1;
        printf("%u", bit);
    }
    printf("\n");
}

int main()
{
    uint32_t v[] = {214, 77, 84, 134, 86};
    int size = sizeof(v) / sizeof(v[0]);
    uint32_t *p = v; // p=&v[0]
    for (int i = 0; i < size; i++)
    {
        if ((*p & 1) != 0)
        {
            printf("0x%08X\n", *p);
        }
        else
        {
            print_binary(*p);
        }
        p++; //&v[i]++
    }
    free(p);

    return 0;
}