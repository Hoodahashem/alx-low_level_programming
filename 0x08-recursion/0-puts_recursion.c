#include<stdio.h>
/**
 * _puts_recursion - function write a string
 * @s: the string
 * Return:Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\0');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
