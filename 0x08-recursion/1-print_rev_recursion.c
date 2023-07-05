#include<stdio.h>
/**
 * _print_rev_recursion - Print the string in the reverse order
 * @s:the string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
