#include<stdio.h>
/**
 * rev_string - reverses the string
 *
 * @s: the string
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int x;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (x = i; x > 0; x--)
	{
		putchar(*s);
		s--;
	}
}
