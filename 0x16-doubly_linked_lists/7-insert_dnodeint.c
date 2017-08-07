#include "lists.h"

/**
 * create_node - creates node with specified int as data
 * @new: double pointer to a node in doubly linked list
 * @n: int to put into node as data
 **/
void create_node(dlistint_t **new, int n)
{
	*new = malloc(sizeof(dlistint_t *));
	(*new)->n = n;
	(*new)->next = NULL;
	(*new)->prev = NULL;
}

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: double pointer to head
 * @idx: index to desired insertion location
 * @n: value to give to new node
 * Return: address of new node, or NULL on failure
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h, *prev = *h;
	unsigned int i;

	if (!h)
		return (NULL);
	create_node(&new, n);
	if (*h == NULL && idx == 0) /* empty list, insert at  */
	{
		*h = new;
		return (new);
	}
	if (*h == NULL && idx > 0) /* empty list, wrong place to insert */
		return (NULL);
	for (i = 0; prev && i <= idx; i++)
	{
		if (idx == 0)
		{ /* insert at beginning */
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
		prev = tmp;
		tmp = tmp ? tmp->next : tmp;
	}
	return (NULL);
}
