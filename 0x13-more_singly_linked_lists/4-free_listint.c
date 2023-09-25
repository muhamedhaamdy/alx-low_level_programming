#include "lists.h"

/**
 * free_listint - free the list
 * @head : the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	if (curr)
	{
		while (curr->next)
		{
			curr = curr->next;
			free(curr);
		}
	}
}
