#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers from 0 to 14
 * Return: numbers
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
for (i = j; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar (j % 10 + '0');
}
_putchar('\n');
}
}