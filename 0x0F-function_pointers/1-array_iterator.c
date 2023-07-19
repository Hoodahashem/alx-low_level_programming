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
	if (size == 0)
	{
		return;
	}
	if (action == NULL)
		return;
	action(size);
}
