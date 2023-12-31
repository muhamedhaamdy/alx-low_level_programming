#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - add a node at specific index
 *
 * @h : the head
 * @idx : the index
 * @n : an integer
 * Return: the summation of the list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *prev, *tmp;
	unsigned int i = 0;

	curr = *h;
	if (!idx)
		return (add_dnodeint(h, n));
	while (curr)
	{
		if (i == idx)
		{
			tmp = malloc(sizeof(dlistint_t));
			if (!tmp)
				return (NULL);
			tmp->n = n;
			prev = curr->prev;
			curr->prev = prev->next = tmp;
			tmp->next = curr;
			tmp->prev = prev;
			return (tmp);
		}
		curr = curr->next;
		i++;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
