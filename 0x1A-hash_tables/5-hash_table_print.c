#include "hash_tables.h"

/**
 * hash_table_print - print the whole hash table
 *
 * @ht : the hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i = 0, len;
	char *buff;

	if (!ht)
		return;
	buff = malloc(1024);
	for (; i < 1024; i++)
	{
		buff[i] = '\0';
	}
	strcat(buff, "{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (curr->key || curr->value)
			{
				strcat(buff, "'");
				strcat(buff, curr->key);
				strcat(buff, "': '");
				strcat(buff, curr->value);
				strcat(buff, "'");
				strcat(buff, ", ");
			}
			curr = curr->next;
		}
	}
	strcat(buff, "}\n");
	len = strlen(buff);
	for (i = 0; i < len; i++)
	{
		if ((i == len - 4 || i == len - 3) && len > 3)
			continue;
		printf("%c", buff[i]);
	}
	free(buff);
}
