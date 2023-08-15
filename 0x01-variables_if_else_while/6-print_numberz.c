#include <stdio.h>

/**
 * main - A program that prints all single digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
}
