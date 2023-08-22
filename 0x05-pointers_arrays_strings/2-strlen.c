#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character
 * Return: length
 */

int _strlen(char *s)
{
	int longchar = 0;

	while (*s != '\0')
	{
		longchar++;
		s++;
	}
	return (longchar);
}
