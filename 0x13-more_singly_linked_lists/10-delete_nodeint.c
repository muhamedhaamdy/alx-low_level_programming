#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at specific index
 * @head : the head of the list
 * @index : the index
 * Return: the head
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	unsigned int i = 0;

	curr = *head;
	while (curr)
	{
		else if (i == idx - 1)
		{
			free(curr->next);
			curr->next = curr->next->next;
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (0);
}
