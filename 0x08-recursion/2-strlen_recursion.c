#include<stdio.h>
/**
 * _strlen_recursion - function return the len of string
 * @s:the string
 * Return:returns the len of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = _strlen_recursion(s + 1);
	return (i + 1);
}