#include "lists.h"

/**
 * create_new_node - create new node, next = NULL
 * @n: data (an integer) to populate into node
 * Return: address of new node, or NULL if no node created
 **/
listint_t *create_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

/**
 * insert_nodeint_at_index - the name says it all!
 * @head: pointer to a pointer to head of linked list
 * @idx: index representing position in lnkedLst where new node shouldbe
 *         be inserted
 * @n: value to be put in node
 * Return: address of new node, or NULL on failure
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int len, i = 0;
	listint_t *tmp, *new, *prev;

	if (head == NULL)
		return (NULL);
	new = create_new_node(n);
	if (new == NULL)
		return (NULL);
	tmp = *head;
	for (len = 0; (tmp && tmp->next); len++)
		tmp = tmp->next;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	if (idx <= len + 1)
	{
		for (i = 0; i < idx; i++)
		{
			prev = tmp;
			if (tmp != NULL)
				tmp = tmp->next;
		}
		new->next = prev->next;
		prev->next = new;
		return (new);
	}
	else
		return (NULL);
}
