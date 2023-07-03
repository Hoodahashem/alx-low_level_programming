#include<stdio.h>
/**
 * _strspn - function do what other function do
 * @s:the string
 * @accept:another one
 * Return: return the output
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			count++;
		}
		else
		{
			return (count);
		}
		s++;
	}
	return (count);
}

