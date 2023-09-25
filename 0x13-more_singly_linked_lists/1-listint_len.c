#include "lists.h"

/**
 * listint_len - calculate the number of elements in list
 * @h : the head of the list
 * Return: the number of elemeants
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
