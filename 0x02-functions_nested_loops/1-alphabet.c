#include "main.h"

/**
 * main - A function that prints the aplphabet in lowercase
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
