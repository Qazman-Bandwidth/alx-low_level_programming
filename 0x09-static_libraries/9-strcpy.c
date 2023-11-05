#include "main.h"

/**
 * _strcpy - a program copies the string pointed to
 * @src: copy from
 * @dest: copy to
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
