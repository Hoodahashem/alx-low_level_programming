#include "hash_tables.h"
/**
 * key_index - index of the key
 * @key: the key
 * @size: size of the key
 * Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hval;

	hval = hash_djb2(key);
	return (hval % size);
}
