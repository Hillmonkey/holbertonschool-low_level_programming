#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node at end of a list_t list
 * @head: pointer to a pointer to a list element
 * @str: string element of node
 * Return: address of new element, or NULL if failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL; /* ready to be new tail */

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
