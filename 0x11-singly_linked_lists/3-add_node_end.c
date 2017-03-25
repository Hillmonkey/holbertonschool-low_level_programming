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
	putchar('\n');
	puts("A\n");
	list_t *new;
	list_t *tmp;
	unsigned int i;

	puts("B\n");
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	puts("C\n");
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;
	puts("F\n");
	printf("%p\n", *head);
	tmp = *head;
	printf("%d", *tmp->str);
	
	puts("1");
	puts(tmp->str);
	while (tmp->next != NULL)
	{
		puts("G");	
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
