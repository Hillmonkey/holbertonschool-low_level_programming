#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of nodes in a linked list
 * @h: pointer to head of linked list
 * Return: number of nodes
 **/

size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
