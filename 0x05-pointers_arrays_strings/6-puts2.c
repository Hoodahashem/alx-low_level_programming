#include<stdio.h>
/**
 * puts2 - prints the string
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;
	int x;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	for (x = i; x > 0; x--)
	{
		putchar(str[x]);
	}
}
