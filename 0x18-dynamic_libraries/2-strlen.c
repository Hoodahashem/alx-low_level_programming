#include "main.h"

/**
 * _strlen - gustavo
 * @s: gustavo
 * Return: gustavo
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
