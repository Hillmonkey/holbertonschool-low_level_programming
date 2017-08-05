#include "lists.h"

/**
 * sum_dlistint - sum the ints contained in the nodes
 * @head: pointer to head of linked list
 * Return: sum of the contents of all the nodes
 **/

int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	sum = 0;
	if (head == NULL)
		return (0);
	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
