#include "lists.h"

/**
 * get_dnodeint_at_index -  get the node with the specific index
 *
 * @head : the head of the list
 * @index : the index of the number
 * Return: the new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
