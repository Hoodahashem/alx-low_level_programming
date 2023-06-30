#include<stdio.h>
/**
 * _strncat - function that works such as strncat works
 * @dest: first prameter
 * @src: second prameter
 * @n: the integer
 * Return: the final product
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
