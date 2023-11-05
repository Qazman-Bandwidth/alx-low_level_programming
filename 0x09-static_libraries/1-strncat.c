#include "main.h"

/**
 * _strncat - A function that concatenante two strings
 * @dest: destination value
 * @src: source value
 * @n: enter value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int word;
	int words;

	word = 0;

	while (dest[word] != '\0')
	{
	word++;
	}
	words = 0;
	while (words < n && src[words] != '\0')
	{
		dest[word] = src[words];
		word++;
words++;
	}
	dest[word] = '\0';
	return (dest);
}
