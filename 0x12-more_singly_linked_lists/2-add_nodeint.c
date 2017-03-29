#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node at beginning of linked list
 * @head: pointer to a pointer to a head list node
 * @n: int value to store in new node
 * Return: head pointer, pointing to newly added element
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
