#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 * Return: ...
 */
void times_table(void)
{
int a, b, c, i, j;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		c = a * b;
		if (c > 9)
		{
			i = c % 10;
			j = (c - i) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(j + '0');
			_putchar(i + '0');
		}
		else
		{
			if (b != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
}

