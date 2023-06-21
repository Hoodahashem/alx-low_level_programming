#include<stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 *
 * @i:the integer
 *
 * return: allways 0 (success)
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
