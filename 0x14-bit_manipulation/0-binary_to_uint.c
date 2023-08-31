#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	unsigned int re = 0;
	int pow;

	if (b == NULL)
	{
		return (0);
	}
	while (b[l] != NULL)
	{
		l++;
	{
	for (l--, pow = 1; l >= 0; l--, pow *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
		if (b[l] & 1)
		{
			re += pow;
		}
	}
	return (re);
}
