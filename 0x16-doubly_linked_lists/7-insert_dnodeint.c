#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: double pointer to head
 * @idx: index to desired insertion location
 * @n: value to give to new node
 * Return: address of new node, or NULL on failure
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *prev;
	unsigned int i, success = FALSE;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			new->next = (*h);
			*h = new;
			return (*h);
		}
		else
			return (NULL);
	}
	tmp = prev = *h;
	for (i = 0; !success && tmp; i++)
	{
		if (idx == i)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			success = TRUE;
		}
		if (success)
			break;
		prev = tmp;
		tmp = tmp->next;
	}
	if (success)
		return (new);
	else if (idx == i)
	{
		new->next = tmp;
		new->prev = prev;
		if (prev)
			prev->next = new;
		return (new);
	}
	return (NULL);
}
