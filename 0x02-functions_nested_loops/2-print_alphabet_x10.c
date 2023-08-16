#include "main.h"

/**
 * print_alphabet_x10 - A function that print 10 times the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char i;
int j = 1;

while (j <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
j++;
}
}
