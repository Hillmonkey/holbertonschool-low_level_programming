#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return length of doubly linked list
 * @h: points to a list element, passed in to point to head
 * Return: number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
