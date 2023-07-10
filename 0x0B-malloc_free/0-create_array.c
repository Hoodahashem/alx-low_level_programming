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
	if (size == 0)
	{
		return (NULL);
	}
	char *ptr = malloc(n * sizeof(char));

	return (ptr);
}
