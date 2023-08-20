#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - A function that draw a diagonal line on the terminal
 * @n: The number to test
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == a)
	_putchar('\\');
else if (b < a)
	_putchar(' ');
}
_putchar('\n');
}
}
}
