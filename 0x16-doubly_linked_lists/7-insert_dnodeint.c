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
	dlistint_t *new, *tmp, *previ;
	unsigned int i, success = FALSE;

	if (!h)
		return (NULL);

	new = malloc(sizeof (dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	tmp = previ = *h;
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
		previ = tmp;
		tmp = tmp->next;
	}
	if (success)
		return new;
	else if (idx == i)
	{
		new->next = tmp;
		new->prev = previ;
		if (previ)
			previ->next = new;
		return (new);
	}
	return (NULL);
}
