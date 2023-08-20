#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to a standard output
 * @c: That character to print
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
