#include<stdio.h>
/**
 * print_rev - prints the string in reverse order
 *
 * @s: the string !
 */


void print_rev(char *s)
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
		printf("%c", s);
		s--
	}
	printf("\n");
}
