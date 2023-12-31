#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string variable
 * Return: string
 */

void rev_string(char *s)
{
	int counter = 0;
	int i;
	char reverse = s[0];

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		reverse = s[i];
		s[i] = s[counter];
		s[counter] = reverse;
	}
}
