#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @i: is the parameter
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
int last_num;

last_num = i % 10;
if (last_num < 0)
{
last_num *= -1;
}
_putchar(last_num + '0');
return (last_num);
}
