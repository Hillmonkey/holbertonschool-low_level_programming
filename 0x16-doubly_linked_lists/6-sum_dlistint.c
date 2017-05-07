#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	size_t i;
	int sum;

	sum = 0;
	i = 0;
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
