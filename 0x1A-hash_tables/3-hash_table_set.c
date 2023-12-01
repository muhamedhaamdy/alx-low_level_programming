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

	if (!value || !ht)
		return (0);
	new_ht = malloc(sizeof(hash_node_t));
	if (!new_ht)
		return (0);
	new_ht->key = strdup(key);
	new_ht->value = strdup(value);
	new_ht->next = NULL;
	curr = ht->array[index];
	if (curr)
	{
		new_ht->next = curr;
		ht->array[index] = new_ht;
	}
	else
		ht->array[index] = new_ht;
	return (1);
}
