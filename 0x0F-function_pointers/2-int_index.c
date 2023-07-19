#include "function_pointers.h"
/**
 * int_index - normal function
 * @size:normal integer
 * @cmp:normal pointer
 * Return:0 if success
 * @array:normal array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
