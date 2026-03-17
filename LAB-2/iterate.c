#include <stdio.h>

int main()
{
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE, 0x1EE71EE7};

    for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}