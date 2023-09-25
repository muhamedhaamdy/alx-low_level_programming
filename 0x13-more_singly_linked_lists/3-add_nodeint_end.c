#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head : the head of the list
 * @n : the date of the node
 * Return: the address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *curr;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = node;
	return (node);
}
