#include<stdio.h>
/**
 * _strncpy - function dose what strncpy dose
 * @dest: first string
 * @src: second string
 * @n: the integer
 * Return: final product
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	for (; i < n; i++)
	{
		*ptr++ = '\0';
	}
	return (dest);
}
