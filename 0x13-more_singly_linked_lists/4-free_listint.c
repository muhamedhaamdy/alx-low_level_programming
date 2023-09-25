#include "lists.h"

/**
 * free_listint - free the list
 * @head : the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *curr = head, *node;

	if (curr)
	{
		while (curr->next)
		{
			node = curr->next;
			free(curr);
			curr = node;
		}
	}
}
