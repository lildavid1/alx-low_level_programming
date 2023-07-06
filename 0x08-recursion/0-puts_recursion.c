#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') /* Base case: end of string */
    {
        _putchar('\n'); /* Print newline */
        return;
    }

    _putchar(*s); /* Print current character */
    _puts_recursion(s + 1); /* Recursively call the function with the next character */
}

