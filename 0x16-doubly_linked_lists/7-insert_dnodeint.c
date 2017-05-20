#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @idx: index to insert at
 * @h: head of dlistint_t
 * @n: number for new node
 *    NOTE: This code is borrowed from Tim Britton to insure correct functionality
 *          of subsequent assignments that build on the doubly-linked list data 
 *          structure ...
 * Return: Returns address to the new dnodeint, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *walk, *newnode, *temp;
	unsigned int i;

	if (h == NULL && idx != 0)
		return (NULL);
	walk = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		if (walk != NULL)
		{
			newnode->next = walk;
			walk->prev = newnode;
		}
		else
			newnode->next = NULL;
		newnode->prev = NULL; *h = newnode;
		return (*h);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (walk == NULL)
		{
			free(newnode); return (NULL);
		}
		walk = walk->next;
	}
	if (walk == NULL)
	{
		free(newnode); return (NULL);
	}
	temp = walk;
	walk = walk->next;
	temp->next = newnode;
	newnode->next = walk;
	newnode->prev = temp;
	return (newnode);
}
