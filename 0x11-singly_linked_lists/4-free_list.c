#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * r_free_list - frees malloc'ed memory recursively - one link at a time.
 * @ptr: pointer that works its way through a list
 **/
void r_free_list(list_t *ptr)
{
	if (ptr->next != NULL)
		r_free_list(ptr->next);
	free(ptr->str);
	free(ptr);
}


/**
 * free_list - frees all malloc'ed memory associated with a linked list
 * @head: pointer to head of linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	r_free_list(head);
}
