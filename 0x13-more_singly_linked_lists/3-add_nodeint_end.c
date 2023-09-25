#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head : the head of the list
 * @n : the date of the node
 * Return: the address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (!node || !head)
		return (NULL);
	node->n = n;
	if (curr)
	{
		while (curr->next)
			curr = curr->next;
		curr->next = node;
	}
	else
		*head = node;
	return (node);
}
