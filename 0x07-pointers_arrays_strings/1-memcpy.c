#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: memory area destination
 *@src: memory area source
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
