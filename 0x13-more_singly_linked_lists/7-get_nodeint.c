#include "lists.h"

/**
 * get_nodeint_at_index - get the node at specific index
 * @head : the head of the list
 * @index : the index
 * Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
