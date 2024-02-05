#include "search_algos.h"

/**
 * linear_search - function that seaches for itm in linear method
 * @array: the array to search in
 * @value: the value to match
 * @size: the size of the array
 * Return: the idx of the first value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (; x < size; x++)
	{
		if (array[x] == value)
		{
			return ((int)x);
		}
	}
	return (-1);
}
