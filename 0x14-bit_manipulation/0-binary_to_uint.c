#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	unsigned int re = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[l] != NULL)
	{
		l++;
	}
	int pow = l - 1;

	for (int i = l - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			re += 1 << pow;
		}

		pow--;
	}
	return (re);
}
