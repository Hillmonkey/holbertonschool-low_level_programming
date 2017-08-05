#include "lists.h"

/**
 * print_dlistint - print the number of nodes
 * @h: pointer to head of linked list
 * Return: number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
