#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes the character c to standard output
 * @c: The character to print
 * Return: 1 (success)
 * On error, return -1, and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
