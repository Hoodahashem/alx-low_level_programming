#include<stdio.h>
/**
 * _strchr - fuction simular to another function
 * @s: the pointer
 * @c: the character
 * Return:the char if found null if not found.
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	for (; *ptr != '\0'; ptr++)
	{
		if (*ptr == c)
		{
			return (*ptr);
		}
	}
	return (NULL);
}
