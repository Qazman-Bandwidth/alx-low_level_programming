#include "main.h"

/**
 * _strlen - a function to returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int count = 0;
		while (*s != '\0')
		{
			count++;
			s++;
		}
	return (count);
}
