#include<stdio.h>
/**
 * _isalpha - checks if there is and alphabet
 *
 * @c: the character
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
