#include "hash_tables.h"
/**
 * hash_table_set - set the specified hash table value
 * @ht: the hash table
 * @value: the hash value
 * @key: the hash key
 * Return: 0 if successful and 1 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inky;
	hash_node_t *new_node;

	inky = key_index(key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = key;
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[inky];
	ht->array[inky] = new_node;
	return (1);
}
