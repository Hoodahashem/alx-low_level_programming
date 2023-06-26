#include<stdio.h>
/**
 * _strlen - function that returns the length of a string.
 *
 *@s: the chars
 *
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (sizeof(*s[0]) == sizeof(char))
	{
		x += 1;
	}
	return (x);
}
