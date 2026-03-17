#include <stdio.h>
#include <stdint.h>

int main()
{
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE, 0x1EE71EE7}; //hexa numbers

    unsigned char *p1 = (unsigned char *)v;
    printf("--- 1 byte steps ---\n");
    for (int i = 0; i < sizeof(v) / sizeof(unsigned char); i++)
    {
        printf("%p -> 0x%02X\n", (void *)(p1 + i), *(p1 + i));
    }

    printf("\n");

    unsigned short *p2 = (unsigned short *)v;
    printf("--- 2 byte steps ---\n");
    for (int i = 0; i < sizeof(v) / sizeof(unsigned short); i++)
    {
        printf("%p -> 0x%04X\n", (void *)(p2 + i), *(p2 + i));
    }

    printf("\n");
    unsigned int *p4 = (unsigned int *)v;
    printf("--- 4 byte steps ---\n");
    for (int i = 0; i < sizeof(v) / sizeof(unsigned int); i++)
    {
        printf("%p -> 0x%08X\n", (void *)(p4 + i), *(p4 + i));
    }

    return 0;
}