#include "main.h"
/**
 * _strchr - a Program to return string
 * @s: value input
 * @c: value input
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (&s[count]);
	}
	return (0);
}
