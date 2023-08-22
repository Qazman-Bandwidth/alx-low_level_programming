#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: print
 */

char *_strcpy(char *dest, char *src)
{
int x = 0;
int y = 0;

while (*(src + y) != '\0')
{
	y++;
}
for (; x < y ; x++)
{
	dest[x] = src[x];
}
dest[y] = '\0';
return (dest);
}
