#include "main.h"
/**
 * _strchr - gustavo
 * @s: gustavo
 * @c: gustavo
 * Return: gustavo
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
