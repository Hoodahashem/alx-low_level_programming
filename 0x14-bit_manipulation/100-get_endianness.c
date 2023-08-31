#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: gustavo
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
