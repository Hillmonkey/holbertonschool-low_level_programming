#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	/* if (*head == NULL) --from pseudocode */
	new->next = *head; /* good if head = NULL or elsewise */
	new->prev = NULL;
	*head->prev = new;
	**head->prev = new;
	head->prev = new;
	*head = new;
	
	return (*head);
}
