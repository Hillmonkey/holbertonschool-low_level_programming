#include "lists.h"

/**
 * r_free_dlist - frees malloc'ed memory recursively - from tail to head
 * @ptr: pointer that works its way through the list
 **/
void r_free_dlist(dlistint_t *ptr)
{
	if (ptr->next != NULL)
		r_free_dlist(ptr->next);
	free(ptr);
}

/**
 * free_dlistint - helper function for recursive list memory freer
 * @head: pointer to head of linked list
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	r_free_dlist(head);
}
