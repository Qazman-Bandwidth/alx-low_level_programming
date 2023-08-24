#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: The destination variable
 * @src: The source varibale
 * @n: the n bytes
 * Return: 1 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
