#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * r_free_list - frees malloc'ed memory recursively - one link at a time.
 * @ptr: pointer that works its way through a list
 * Return: if ptr != NULL, return ptr->next
 **/
void r_free_list(list_t *ptr)
{
	if (ptr->next != NULL)
		r_free_list(ptr->next);
	free(ptr->str);
	free(ptr);
	return;
}


/** 
 * free_list - frees all malloc'ed memory associated with a linked list
 * @:head: pointer to head of linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;
	r_free_list(temp);
	return;
}
