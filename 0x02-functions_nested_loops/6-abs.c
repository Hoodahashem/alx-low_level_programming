#include<stdio.h>
/**
 * _abs - computes the absolute value of an integer and return the value
 *
 * @i:the integer
 *
 * Return: allways 0 (success)
 *
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
