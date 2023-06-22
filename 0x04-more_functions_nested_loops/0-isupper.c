#include<stdio.h>
/**
 * _isupper - checks if the character is capital
 *
 * @c: the character
 *
 * Return: returns 1 if capital and 0 if small
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
