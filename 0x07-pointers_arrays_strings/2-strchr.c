#include<stdio.h>
/**
 * _strchr - fuction simular to another function
 * @s: the pointer
 * @c: the character
 * Return:the char if found null if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
