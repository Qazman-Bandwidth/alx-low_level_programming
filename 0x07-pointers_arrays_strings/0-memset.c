#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @n: first byte
 * @s: memory area pointed to
 * @b: constant byte
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] - b;
n--;
}
return (s);
}
