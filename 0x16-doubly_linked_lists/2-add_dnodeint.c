#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of linked list
 * @head: pointer to a pointer to a head list node
 * @n: int value to store in new node
 * Return: head pointer, pointing to newly added element
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
