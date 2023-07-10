#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - function to learn memory allocation
 * @size:size of the array
 * @c:the character
 * Return: return 0 if succeed
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
