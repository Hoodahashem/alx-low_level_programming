#include<stdio.h>
/**
 * void print_alphabet_x10(void) -  prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * return: Allways 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i=1; i<=10; i++)
	{
		print_alphabet();
	};
}
