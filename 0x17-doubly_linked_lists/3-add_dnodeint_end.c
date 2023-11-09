#include "lists.h"
/**
 * add_dnodeint_end - adds a node the end of list
 *
 * @head : the head of the list
 * @n : an integer
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t)), *curr;
	
	if (!tmp)
		return (NULL);
	curr = *head;
	tmp->n = n;
	tmp->next = NULL;
	if (!*head)
	{
		*head = tmp;
		return (tmp);
	}
	while(curr->next)
		curr = curr->next;
	curr->next = tmp;
	tmp->prev = curr;
	return (tmp);
}
