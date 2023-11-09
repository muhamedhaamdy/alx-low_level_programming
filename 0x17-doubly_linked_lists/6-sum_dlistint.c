#include "lists.h"
/**
 * sum_slistint - summ all list elements
 * @head : the head
 * Return: the summation of the list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while(curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
