#include<stdio.h>
/**
 * swap_int - function that swaps the integers
 * @a: first intger
 * @b: second intger
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
