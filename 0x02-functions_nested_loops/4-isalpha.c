#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: character to check
 * Return: 1 or 0 if the letter is lowercase or uppercase
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
{
return (1);
}
return (0);
}
