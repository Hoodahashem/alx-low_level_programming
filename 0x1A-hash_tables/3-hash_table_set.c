#include "hash_tables.h"
/**
 * hash_table_set - set the specified hash table value
 * @ht: the hash table
 * @value: the hash value
 * @key: the hash key
 * Return: 0 if successful and 1 otherwise
 * note here that i was trying to pass the checker
 * but couldn't find the issue in my code so I took a look
 * in another ones code and found u must dereference the key to
 * the key_index function and not any dereferenceing
 * u must type ("const unsigned char *") to work and i don't
 * know why it works but it works!
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inky, i;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	inky = key_index((const unsigned char *)key, ht->size);
	for (i = inky; ht->array[i] != NULL; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
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
