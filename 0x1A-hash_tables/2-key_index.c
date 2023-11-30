#include "hash_tables.h"

/**
 * key_index - get the index of a key
 * @key : the key
 * @size : the size of hash tabel
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (0);
	return (hash_djb2((unsigned char *) key) % size);
}
