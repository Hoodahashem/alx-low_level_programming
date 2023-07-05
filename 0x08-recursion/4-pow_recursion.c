#include<stdio.h>
/**
 * _pow_recursion - function dose what pow function dose
 * @x:the base
 * @y:the exponent
 * Return: returns the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recrsion(x, y - 1));
}
