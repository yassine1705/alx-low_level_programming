#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      _putchar('1');
      return (1);
    }
  else
    {
      _putchar('0');
      return (0);
    }
}
