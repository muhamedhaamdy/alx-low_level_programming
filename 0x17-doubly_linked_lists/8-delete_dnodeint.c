#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at specific index
 * @head : the head
 * @index : the index of the node
 * Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (current)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			if (temp->next)
				temp->next->prev = current;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
