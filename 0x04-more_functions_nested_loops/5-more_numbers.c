#include<stdio.h>
/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				putchar('1');
				putchar(x % 10 + '0');
			}
		}
		putchar('\n');
	}
}
