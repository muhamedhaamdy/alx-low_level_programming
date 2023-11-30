#include "hash_tables.h"

/**
 * hash_table_create - intitialize a new hash table
 * @size : the size of the nodes
 * Return: the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t) * size);
	for (; i < size; i++)
		new_ht->array[i] = NULL;
	return (new_ht);
}
