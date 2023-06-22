#include<stdio.h>
/**
 * _isdigit - checkes if c is an integer or not
 *
 * @c: the digit
 *
 * Return: return 1 if c between 1 and 9
 * and return 0 if not
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
