#include "lists.h"
/**
 * free_dlistint - free the list
 *
 * @head : the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *next;

	curr = head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
