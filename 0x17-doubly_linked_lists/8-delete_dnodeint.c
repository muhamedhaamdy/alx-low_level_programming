#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at specific index
 * @head : the head
 * @index : the index of the node
 * Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	if (!index)
	{
		curr = curr->next;
		curr->prev = NULL;
		free(*head);
		*head = curr;
		return (1);
	}
	while (curr->next)
	{
		if (i == index)
		{
			if (curr->next && curr->prev)
			{
				curr->prev->next = curr->next;
				curr->next->prev = curr->prev;
				free(curr);
				return (1);
			}
			else if (!curr->next && !curr->prev)
			{
				*head = NULL;
				return (1);
			}
		}
		curr = curr->next;
		i++;
	}
	if (i == index)
	{
		curr->prev->next = NULL;
		return (1);
	}
	return (-1);
}
