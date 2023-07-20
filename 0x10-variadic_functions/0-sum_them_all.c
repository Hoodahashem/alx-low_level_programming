#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
/**
 * sum_them_all - normal function
 * @n:the number of elements
 * Return:the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;

	}
	va_end(args);
	return (sum);
}
