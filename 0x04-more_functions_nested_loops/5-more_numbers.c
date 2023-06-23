#include<stdio.h>
/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 1; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			printf("%d", x);
		}
		putchar('\n');
	}
}
