#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the haed of the list
 * @head : the head of the list
 * Return: the head before deleation
*/
int pop_listint(listint_t **head)
{
	listint_t *node = (*head)->next;
	int n;

	if (!node || !head)
		return (0);
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
