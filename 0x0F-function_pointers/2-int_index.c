#include "function_pointers.h"
/**
 * int_index - normal function
 * @size:normal integer
 * @cmp:normal pointer
 * Return:0 if success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	while (size-- > 0)
		cmp(*array);
		array++;
}
