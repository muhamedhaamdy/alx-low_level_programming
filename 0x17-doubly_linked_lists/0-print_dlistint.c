#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h : the head
 * Return: number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr;
	int c = 0;

	curr = (dlistint_t *) h;
	while (curr)
	{
		printf("%d\n", curr->n);
		c++;
		curr = curr->next;
	}
	return (c);
}
