#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: First number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*b = *a;
	*b = n;
}
