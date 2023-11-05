#include "main.h"

/**
 * _memcpy - a function that copy memory area
 * @dest: destination memory which stored
 * @src: source memory which copied
 * @n: number of bytes
 * Return: copy memory with n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
