#include "main.h"
/**
 * _strncpy - gustavo
 * @dest: gustavo
 * @src: gustavo
 * @n: gustavo
 * Return: gustavo
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
