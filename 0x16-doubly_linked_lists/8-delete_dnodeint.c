#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

/**
 * delete_dnodeint_at_index - delete node at index in doubly linked list
 * @head: pointer to a pointer to head of doubly linked list 
 * @index: position desired to be deleted from list
 * Return: 1 on success, -1 on failure
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len;
	size_t i;
	dlistint_t *tmp, *dud;

	len = dlistint_len(*head);
	tmp = *head;
	/* delete first element */
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	/* move ptr to index spot in list */
	for(i = 0; i < index - 1; i++)
		tmp = tmp->next;
	/* delete element from middle of list */
	if (index < len - 1)
	{
		dud = tmp->next;
		tmp->next = tmp->next->next;
		tmp->next->prev = tmp;
		free (dud);
		return (1);
	}
	/* delete last element */
	if (index == len -1)
	{
		tmp->prev->next = NULL;
		free (tmp);
		return (1);
	}
	return (-1);
}
