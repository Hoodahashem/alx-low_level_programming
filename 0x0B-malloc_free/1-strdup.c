#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - funcion to learn malloc
 * @str: the string
 * Return:returns 0 if success
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 1;

	while (*str != '\0')
	{
		i++;
	}
	ptr = malloc(i * sizeof(char));

	while (*str != '\0')
	{
		ptr = str;
		ptr++;
		str++;
	}
	return (ptr);
}
