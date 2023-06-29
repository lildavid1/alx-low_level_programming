#include "main.h"
#include <stdio.h>

/**
 * print_magic_number - Prints a[2] = 98
 */
void print_magic_number(void)
{
    int a[5] = {98, 402, 1024, 0, -98};
    int *p;

    p = a + 2;

    printf("a[2] = %d\n", *(p));
}
