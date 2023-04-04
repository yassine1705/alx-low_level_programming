#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
            str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
            str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
            str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
            str[i - 1] == '{' || str[i - 1] == '}')
        {
            if (str[i] >= 'a' &&

