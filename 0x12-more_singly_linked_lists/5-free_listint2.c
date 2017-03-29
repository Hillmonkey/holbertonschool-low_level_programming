#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * r_free_list - frees malloc'ed memory recursively - from tail to head
 * @ptr: pointer that works its way through the list
 **/
void r_free_list(listint_t *ptr)
{
	if (ptr->next != NULL)
		r_free_list(ptr->next);
	free(ptr);
}

/**
 * free_listint2 - helper file for r_free_list - which frees memory recursively
 * @head: pointer to head of linked list
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	r_free_list(tmp);
	*head = NULL;
}
