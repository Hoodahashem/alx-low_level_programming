#include "function_pointers.h"
/**
 * array_iterator - its normal function
 * @array:normal array
 * @size:normal size
 * @action:normal pointer
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(i);
	}
}
