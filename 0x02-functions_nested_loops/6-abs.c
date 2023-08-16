#include "main.h"

/**
 * _abs -  A function that computes the absolute value of an integer
 * @i: The parameter to return
 * Return: absolute value of a number
 */

int _abs(int i)
{
int abs_val;
if (i < 0)
{
abs_val = i * -1;
return (abs_val);
}
return (i);
}
