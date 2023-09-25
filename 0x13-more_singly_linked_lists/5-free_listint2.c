#include "lists.h"

/**
 * free_listint2 - free the list
 * @head : the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *curr = *head, *node;

	if (!head)
		return;
	if (curr)
	{
		while (curr)
		{
			node = curr->next;
			free(curr);
			curr = node;
		}
	}
	*head = NULL;
}
