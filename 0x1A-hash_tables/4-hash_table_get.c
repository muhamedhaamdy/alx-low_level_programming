#include "hash_tables.h"

/**
 * hash_table_get - get a value of a key from a hash table
 * @ht : the hash table
 * @key : the key
 * Return: the
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *curr;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (!strcmp(curr->key, key))
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
