#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data in the d-linked list
 * @head: pointer to head of doubly-linked list
 * Return: integer sum of all list data elements
 **/
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
