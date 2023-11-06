#include "main.h"

/**
 * _print_rev_recursion - A program to print string in reverse
 * @s: string to print out
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
