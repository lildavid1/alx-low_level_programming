#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, len1, len2, carry;
    int num1, num2, sum;

    len1 = 0;
    while (n1[len1] != '\0')
        len1++;

    len2 = 0;
    while (n2[len2] != '\0')
        len2++;

    if (len1 > size_r || len2 > size_r)
        return 0;

    carry = 0;
    i = len1 - 1;
    j = len2 - 1;
    k = size_r - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        num1 = (i >= 0) ? n1[i] - '0' : 0;
        num2 = (j >= 0) ? n2[j] - '0' : 0;

        sum = num1 + num2 + carry;
        carry = sum / 10;

        r[k] = (sum % 10) + '0';

        i--;
        j--;
        k--;
    }

    if (k >= 0)
        r[k] = '\0';
    else
        return 0;

    return r + k;
}

