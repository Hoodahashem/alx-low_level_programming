#include<stdio.h>
/**
 * _memset - function to fill byte
 * @s:the pointer
 * @b:the character
 * @n:an integer
 * Return:return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
