#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *aux;
	hash_table_t *hash_table = ht;

	for (i = 0; i < hash_table->size; i++)
	{
		node = hash_table->array[i];
		while (node)
		{
			aux = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = aux;
		}
	}
	free(hash_table->array);
	free(hash_table);
}
