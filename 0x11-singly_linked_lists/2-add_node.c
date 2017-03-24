#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node at beginning of a list_t list
 * @head: pointer to a pointer to a list element
 * @str: string element of a node
 * Return: Address of new element or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
