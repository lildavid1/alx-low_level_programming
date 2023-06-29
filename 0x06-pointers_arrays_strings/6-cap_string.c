#include <ctype.h>

char *cap_string(char *str)
{
    int i = 0;
    int capitalize_next = 1;  // Flag to indicate if the next character should be capitalized

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
            str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
            str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && islower(str[i]))
        {
            str[i] = toupper(str[i]);
            capitalize_next = 0;
        }

        i++;
    }

    return str;
}
In this implementation, we iterate over each character in the string. Whenever we encounter a separator character, we set the capitalize_next flag to 1, indicating that the next character should be capitalized. If the flag is set and the current character is a lowercase letter, we capitalize it using the toupper function.

You can use this function in your program to capitalize the words in a given string.







