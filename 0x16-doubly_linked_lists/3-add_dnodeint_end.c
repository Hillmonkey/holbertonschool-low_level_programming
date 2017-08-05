#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of a dlistint_t list
 * @head: pointer to a pointer to a head list node
 * @n: int value to store in a new node
 * Return: address of new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp, *previ;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;
	previ = *head;
	while (tmp->next != NULL)
	{
		previ = tmp;
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = previ;
	return (new);
}
