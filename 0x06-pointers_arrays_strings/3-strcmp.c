#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if the strings are equal, a negative number if s1 is less than s2,
 *         or a positive number if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

