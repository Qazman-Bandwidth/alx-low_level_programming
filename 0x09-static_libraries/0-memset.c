#include "main.h"

/**
 * _memset - A program to fills a block of memory with value
 * @s: address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to changed
 * Return: new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
