#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print some stuff from a singly linked list
 * @h: points to a list element, specifically the head
 * Return: number of nodes
 **/

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
