#include "main.h"
/**
 * _atoi - a program that convert a string into an integer
 * @s: the string
 * Return: integer
 */

int _atoi(char *s)
{
int a = 1, count = 0;
unsigned int res = 0;
while (!(s[count] <= '9' && s[count] >= '0') && s[count] != '\0')
{
if (s[count] == '-')
a *= -1;
count++;
}
while (s[count] <= '9' && (s[count] >= '0' && s[count] != '\0'))
{
res = (res * 10) + (s[count] - '0');
count++;
}
res *= a;
return (res);
}
