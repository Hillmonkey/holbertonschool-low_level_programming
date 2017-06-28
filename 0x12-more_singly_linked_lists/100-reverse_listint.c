#include "lists.h"

/**
 * reverse_listint - reverses list in place
 * @head: pointer to pointer to head
 * Return: pointer to head after reversal
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	a = NULL;
	b = (*head)->next;
	(*head)->next = NULL;

	while (b != NULL)
	{
		a = b->next;
		b->next = *head;
		(*head) = b;
		b = a;
	}
	return (*head);
}
