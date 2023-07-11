#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - funcion to learn malloc
 * @str: the string
 * Return:returns 0 if success
 */
char *_strdup(char *str)
{
	int x = 0;
	char *ptr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		i++;
		str++;
	}
	i++;
	ptr = malloc(i * sizeof(char));

	while (x < i)
	{
		ptr = str;
		ptr++;
		str++;
		x++;
	}
	ptr[i] = '\0';
	return (ptr);
}
