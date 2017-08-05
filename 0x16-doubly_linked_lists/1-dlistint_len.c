#include "lists.h"

/**
 * dlistint_len - returns number of nodes in a linked list
 * @h: pointer to head of linked list
 * Return: number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
