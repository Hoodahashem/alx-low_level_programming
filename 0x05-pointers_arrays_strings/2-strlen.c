#include<stdio.h>

int _strlen(char *s)
{
	int x = 0;

	while (*s)
	{
		x += 1;
	}	
	return (x);
}
