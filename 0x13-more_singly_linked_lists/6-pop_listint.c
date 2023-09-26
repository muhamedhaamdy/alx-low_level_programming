#include "lists.h"

/**
 * pop_listint - delete the haed of the list
 * @head : the head of the list
 * Return: the head before deleation
*/
int pop_listint(listint_t **head)
{
	listint
	int n;

	if (!head)
		return (0);
	n = head->n;
	*head = haed->next;
	return (n);
}
