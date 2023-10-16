#include "main.h"
/**
 * _memcpy - gustavo
 * @dest: gustavo
 * @src: gustavo
 * @n: gustavo
 * Return: gustavo
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
