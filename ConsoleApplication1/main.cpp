#include "pch.h"
#include <stdio.h>

struct Test
{
    int SENTINEL_1 = 0xEFBEADDE;
    unsigned char tab[4];
    int SENTINEL_2 = 0xEFBEADDE;
    int value;
    int SENTINEL_3 = 0xEFBEADDE;
};

int main()
{
    Test test;
    test.value = 0x11223344;

    for (int i = 0; i <= 4; i++)
    {
        test.tab[i] = 0xAA;
    }

    printf("%x", test.value);
    printf("%x", test.SENTINEL_1);
    printf("%x", test.SENTINEL_2);
    printf("%x", test.SENTINEL_3);
    getchar();
}
