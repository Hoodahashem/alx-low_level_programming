#include<stdio.h>
/**
 * puts2 - prints the string
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;
	int y;
	int x;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	x = i;
	for (y = 0; y <= x; y++)
	{
		if (y % 2 == 0)
		{
			putchar(str[y]);
		}
	}
}
