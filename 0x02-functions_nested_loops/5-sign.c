#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: sign to print
 * @+: sign to print
 * Return: 1 is positive -1 is negative,  or 0 when equal to zero
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
