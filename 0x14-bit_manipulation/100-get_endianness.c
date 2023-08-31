#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: gustavo
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
