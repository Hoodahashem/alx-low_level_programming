#include<stdio.h>

/**
 * reverse_array - function reverses an array
 * @a: the array
 * @n:the size
 * Return:nothing
 */

void reverse_array(int *a, int n)
{
	for (; n-- >= 0; n--)
	{
		printf("%d ", a[n]);
	}
}
