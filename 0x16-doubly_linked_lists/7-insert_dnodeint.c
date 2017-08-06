#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: double pointer to head
 * @idx: index to desired insertion location
 * @n: value to give to new node
 * Return: address of new node, or NULL on failure
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
/* int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) */
{
	dlistint_t *new, *tmp = *h, *prev = *h;
	unsigned int i;

	if (!h) /* could create node and insert at head??? */
		return (NULL);
	new = malloc(sizeof(dlistint_t *));
	if (!new)
		return (NULL);
	new->n = n, new->next = NULL; new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	for (i = 0; prev->next && i <= idx; i++, prev = tmp, tmp = tmp->next)
	{
		if (idx == 0)
		{
			/* insert at beginning */
			new->next = *h, (*h)->prev = new, *h = new;
			return (new);
		}
		if (prev->next == NULL) /* you're at the end */
		{
			if (idx == i) /* insert at the end */
			{
				prev->next = new, new->prev = prev;
				return (new);
			}
			else /* trying to insert way past end of list */
				return (NULL);
		}
		if (idx == i) /* insert in middle of list */
		{
			prev->next = new, new->prev = prev, new->next = tmp, tmp->prev = new;
			return (new);
		}
	}
	return (NULL);
}
