#include "pch.h"
#include <stdio.h>

struct Test
{
    unsigned char tab[4];
    int value;
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
    getchar();
}
