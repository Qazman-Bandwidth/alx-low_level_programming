#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: The string of words to print
 */

void print_rev(char *s)
{
	int longchar = 0;
	int a;

	while (*s != '\0')
	{
		longchar++;
		s++;
	}
	s--;
	for (a = longchar; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
