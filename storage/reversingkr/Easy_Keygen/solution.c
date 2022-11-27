#include <stdio.h>

char serial[] = "5b134977135e7d13";

int main()
{
    // xor each byte of serial with 0x3
    for (int i = 0; i < sizeof(serial) - 1; i++)
    {
        serial[i] ^= 0x3;
    }

    printf("%s", serial);
}