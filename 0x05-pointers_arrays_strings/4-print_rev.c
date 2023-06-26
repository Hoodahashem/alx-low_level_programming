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
	for (x = 0; x != i; x++)
	{
		printf("%s", s[i - 1]);
		i--;
	}
	printf("\n");
}
