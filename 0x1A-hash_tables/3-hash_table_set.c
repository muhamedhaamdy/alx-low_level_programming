#include "hash_tables.h"

/**
 * hash_table_set - set a key and a value on a hash hash_table_set
 *
 * @ht : the hash table
 * @key : the key
 * @value : the value
 * Return: 1 or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index((unsigned char *) key, ht->size);
	hash_node_t *new_ht, *curr;

	if (!value || !index)
		return (0);
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
		
	new_ht = malloc(sizeof(hash_node_t));
	if (!new_ht)
		return (0);
	new_ht->key = strdup(key);
	new_ht->value = strdup(value);
	new_ht->next = NULL;
	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;
	return (1);
}
