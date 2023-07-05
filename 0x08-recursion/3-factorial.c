#include<stdio.h>
/**
 * factorial - calculate the factorial number
 * @n:the number
 * Return:retrns the factorial number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
