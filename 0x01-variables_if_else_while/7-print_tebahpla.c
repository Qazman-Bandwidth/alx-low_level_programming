#include <stdio.h>

/**
 * main - A program that prints the lower case alphabet in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
