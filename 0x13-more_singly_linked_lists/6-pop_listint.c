#include "lists.h"

/**
 * pop_listint - delete the haed of the list
 * @head : the head of the list
 * Return: the head before deleation
*/
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n;

	if (!node)
		return (0);
	n = node->n;
	*head = node->next;
	return (n);
}
