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
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (i = 0; i <= n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0'
	return (dest);
}
