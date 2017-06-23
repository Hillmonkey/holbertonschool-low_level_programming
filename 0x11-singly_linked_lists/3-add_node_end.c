#include "lists.h"

/**
 * add_node_end - add new node at end of a list_t list
 * @head: pointer to a pointer to a list element
 * @str: string element of node
 * Return: address of new element, or NULL if failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new, *tmp;

	tmp = *head;
	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->len = len;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = new;
	*head = tmp;
	return (new);
}
