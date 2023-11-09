#include "lists.h"
/**
 * add_dnodeint - prints all the elements of a dlistint_t list
 *
 * @head : the head
 * @n : the node that should be inserted
 * Return: the head of new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (!*head)
	{
		*head = tmp;
		return (tmp);
	}
	(*head)->prev = tmp;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
