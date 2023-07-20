#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		if (separator != NULL)
		{
			int lol = va_arg(args,int);
			printf("%d%c", lol, separator);
		}
		else
		{
			printf("%d", lol);
		}
	}
	printf("\n");
}
