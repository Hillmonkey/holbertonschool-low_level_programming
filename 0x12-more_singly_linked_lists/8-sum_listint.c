#include "lists.h"

/**
 * sum_listint - returns sum of all data(n) in linked list
 * @head: pointer to head of list
 * Return: sum of int data in each node of list as int
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
