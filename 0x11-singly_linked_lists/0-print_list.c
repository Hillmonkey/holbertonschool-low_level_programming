#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print some stuff from a singly linked list
 * @h: points to a list element, specifically the head
 * Return: number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
