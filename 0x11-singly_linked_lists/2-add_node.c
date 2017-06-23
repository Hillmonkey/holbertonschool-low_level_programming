#include "lists.h"

/**
 * add_node - add new node at beginning of a list_t list
 * @head: pointer to a pointer to a list element
 * @str: string element of a node
 * Return: Address of new element or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
