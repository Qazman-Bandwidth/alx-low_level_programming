#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 * Reutrn: (1) success
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
