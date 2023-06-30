#include<stdio.h>

/**
 * reverse_array - function reverses an array
 * @a: the array
 * @n:the size
 * Return:nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; n > i; i++)
	{
		printf("%d \n", a[i]);
	}
	for (; n >= 0; n--)
	{
		printf("%d ", a[n]);
	}
}
