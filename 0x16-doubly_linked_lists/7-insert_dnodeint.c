#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "2-add_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - insert node in doubly linked list @ spec'd spot
 * @h: pointer to pointer to head
 * @idx: represents index of desired location to insert node (0-indexed)
 * @n: data to put in new node (simple integer)
 * Return: pointer to new node or NULL on failure
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len;
	dlistint_t *new;
	unsigned int i;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	/* len = dlistint_len((const) *h); */
	len = dlistint_len(*h);
	if (idx < len)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		for (i = 1; i < idx; i++)
			*h = (*h)->next;
		new->next = (*h)->next;
		new->prev = *h;
		(*h)->next = new;
		new->next->prev = new;
	}
	else if (idx == len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}
