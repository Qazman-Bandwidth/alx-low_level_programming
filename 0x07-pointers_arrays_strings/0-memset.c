#include "main.h"
#include <string.h>

/**
 * _memset - A function that fills memory with a constant byte
 * @n: first byte
 * @s: memory area pointed to
 * @b: constant byte
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
int count = 0;
for (; n > 0; count++)
{
s[count] - b;
n--;
}
return (s);
}
