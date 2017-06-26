#include "lists.h"

/**
 * pop_listint - pops first element (head) from a list
 * @head: pointer to a pointer to the head of the list
 * Return: the integer contents of the old head of the list
 **/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
		return (0);
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
