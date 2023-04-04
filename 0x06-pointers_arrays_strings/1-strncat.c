#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
        i++;

    for (j = 0; j < n && src[j] != '\0'; j++)
        dest[i + j] = src[j];

    dest[i + j] = '\0';

    return dest;
}

