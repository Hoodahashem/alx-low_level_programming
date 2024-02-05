#include "search_algos.h"

/**
 * binary_search - function to search with binary search method
 * @array: the array to search into
 * @value: what's we are looking for!
 * @size: the size of the array
 * Return: the idx of the first value
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	else
	{
		int low = 0;
		int high = (int)size;
		int i = 0;

		while (low <= high)
		{
			int mid = low + (high - low) / 2;
			int val = array[mid];

			printf("Searching in array: ");
			for (i = low; i < high; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			if (val == value)
			{
				return (mid);
			}
			else if (val < value)
			{
				low = mid + 1;
			}
			else if (val > value)
			{
				high = mid - 1;
			}
		}
		return (-1);
	}
}
