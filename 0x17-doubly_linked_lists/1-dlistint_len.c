#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 *
 * @h : the head
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = malloc(sizeof(dlistint_t));
	int c = 0;

	curr = h;
	while (curr)
	{
		c++;
		curr = curr->next;
	}
	return (c);
}
