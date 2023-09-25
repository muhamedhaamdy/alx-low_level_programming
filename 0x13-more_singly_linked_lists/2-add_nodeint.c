#include "lists.h"

/**
 * add_nodeint - add node to the begining of the list
 * @head : the head of the list
 * @n : the date of the node
 * Return: the address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t node;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
}
