#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at specific index
 * @head : the head of the list
 * @index : the index
 * Return: the head
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head; 
	unsigned int i = 0;

	curr = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (curr)
	{
		if (i == idx - 1)
		{
			curr->next = curr->next->next;
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (0);
}
