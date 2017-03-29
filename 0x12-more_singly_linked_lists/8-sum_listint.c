#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all data(n) in linked list
 * @head: pointer to head of list
 * Return: sum of int data in each node of list as int
 **/

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
