#include<stdio.h>
/**
 * _memcpy - copy the pointer into another pointer
 * @dest:the first pointer
 * @src:the second pointer
 * @n:an integer
 * Return:the final pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
