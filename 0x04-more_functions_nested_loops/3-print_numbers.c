#include "main.h"

/**
 * print_numbers - function to prints the numbers from 0 to 9
 * @c: The character to be checked
 * Return: 0 or 1
 */

void print_numbers(void)
{
	char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
