#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: ponter to head of doubly linked list
 * Return: number of nodes in list
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
