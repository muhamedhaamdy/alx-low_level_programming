#include "hash_tables.h"

/**
 * hash_table_delete - delete the whole hash table
 *
 * @ht : the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *curr, *tmp;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
