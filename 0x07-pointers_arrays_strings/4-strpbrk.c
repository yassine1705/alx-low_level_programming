#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string to check
 * @accept: pointer to the string of characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	for (; *s; s++, len++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;
	}
	return (len);
}

