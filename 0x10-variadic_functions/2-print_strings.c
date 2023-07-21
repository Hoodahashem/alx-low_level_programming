#include<stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - normal function
 * @separator:normal separator
 * @n:integer
 * Return:nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		gustavo = va_arg(args, char *);

		printf("%s", gustavo);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		if (gustavo == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(args);
}
