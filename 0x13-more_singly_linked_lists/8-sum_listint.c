#include "lists.h"

/**
 * sum_listint - get the sum of all list elements
 * @head : the head of the list
 * Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
