#include "hash_tables.h"

/**
 *  hash_table_set - insera an element ot a hash table
 *
 * @ht : the hash table
 * @key : the key
 * @value : the value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *curr;
	int index;

	if (!ht || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (!strcmp(curr->key, key))
		{
			free(curr->value);
			curr->value = strdup(value);
			if (!curr->value)
				return (0);
			return (1);
		}
		curr = curr->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
