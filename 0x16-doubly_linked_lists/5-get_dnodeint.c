#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of a linked list
 * @head: pointer to head of list
 * @index: position in list to grab node (indexed to zero)
 * Return: pointer to desired node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	unsigned int i;
	dlistint_t *tmp;

	tmp = head;
	for (len = 0; tmp != NULL; len++, tmp = tmp->next)
		;

	if (index > len)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
