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

	while (*s == "/0")
	{
		x += 1;
		s++;
	}
	return (x);
}
