#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of a dlistint_t list
 * @head: pointer to a pointer to a list element
 * @n: int data element of a node
 * Return: Address of a new element or NULL on failure
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}

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
	dlistint_t *tmp;
	unsigned int i;

	tmp = *h;
	/* insert at head */
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	len = dlistint_len(*h);
	/* insert after first and before end */
	if (idx < len)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		for (i = 1; i < idx; i++)
			tmp = (tmp)->next;
		new->next = (tmp)->next;
		new->prev = tmp;
		(tmp)->next = new;
		new->next->prev = new;
		return (new);
	}
	/* insert at end */
	if (idx == len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}
