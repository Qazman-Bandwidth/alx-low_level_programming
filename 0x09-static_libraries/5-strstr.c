#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
