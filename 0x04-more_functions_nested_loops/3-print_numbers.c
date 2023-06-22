#include<stdio.h>
/**
 * print_numbers - prints the nums from 0 to 9
 *
 */
void print_numbers(void)
{
	char i;

	for (i = '0', i <= '9', i++)
	{
		printf("%c", i);
	}
	printf("\n")
}
