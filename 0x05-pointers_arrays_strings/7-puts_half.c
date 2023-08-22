#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: Input string
 * Return: Print
 */

void puts_half(char *str)
{
	int a, n, longa;

	longa = 0;
	for (a = 0; str[a] != '\0'; a++)
		longa++;
	n = (longa / 2);
	if ((longa % 2) == 1)
		n = ((longa + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
