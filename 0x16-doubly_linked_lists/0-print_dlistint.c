#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
