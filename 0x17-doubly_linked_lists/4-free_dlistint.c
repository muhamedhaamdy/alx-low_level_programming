#include "lists.h"
/**
 * free_dlistint - free the list
 *
 * @head : the head of the list
 */
void free_dlistint(dlistint_t *head);
{
	dlistint_t *curr;

	curr = *head;
	while (curr)
	{
		free(curr);
		curr = curr->next;
	}
	free(head);
}
