#include "hash_tables.h"
/**
 * hash_table_get - Get the hash table
 * @key: The key
 * @ht: The hash table
 * Return: The value
 * i was facing the fault in a check in the checker
 * the solution for it was to create a node and traverse
 * throught the nodes instead of travers in the array
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int inky;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	inky = key_index((const unsigned char *)key, ht->size);
	if (inky >= ht->size)
	{
		return (NULL);
	}
	if (ht->array[inky] == NULL)
	{
		return (NULL);
	}
	for (node = ht->array[inky]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (strdup(node->value));
		}
	}
	return (NULL);
}
