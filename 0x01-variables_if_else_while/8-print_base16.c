#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16
 *
 * Return: 0 (success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
	putchar(i + '0');
char j;
for (j = 'a'; j <= 'f'; j++)
	putchar(j);
putchar('\n');
return (0);
}

