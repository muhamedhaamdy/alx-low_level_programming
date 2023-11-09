#include "lists.h"
/**
 * print_dlistint - function that prints linkedlist
 *
 * @h : head of the linkedlist
 * reutrn : the size of the linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = malloc(sizeof(dlistint_t));
	int c = 0;

	curr = h;
	while (curr)
	{
		printf("%d\n", curr->n);
		c++;
		curr = curr->next;
	}
	return (c);
}
