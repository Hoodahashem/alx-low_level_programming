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
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
