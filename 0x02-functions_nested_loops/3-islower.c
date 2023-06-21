#include<stdio.h>
/**
 * _islower - Returns 1 if c is lowercase
 *Returns 0 otherwise
 *
 * @c: the chracter
 *
 * Return: return 1 if lower case and 0 for the rest
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
