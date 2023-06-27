#include<stdio.h>
/**
 * puts2 - prints the string
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;
	int y;
	int x = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	str--;

	for (y = i; y > 0; y--)
	{
		x++;
		if (x % 2 == 0)
		{
			putchar(str[y]);
		}
	}
}
