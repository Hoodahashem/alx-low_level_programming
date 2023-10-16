#include "main.h"

/**
 * _puts - gustavo
 * @str: gustavo
 * Return: gustavo
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
