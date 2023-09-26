#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at specific index
 * @head : the head of the list
 * @idx : the index
 * @n : the number(date)
 * Return: the head
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *curr;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	curr = *head;
	while (curr)
	{
		if (!idx)
		{
			node->next = curr;
			*head = node;
			return (node);
		}
		else if (i == idx - 1)
		{
			noce->next = curr->next;
			curr->next = node;
			return (node);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
