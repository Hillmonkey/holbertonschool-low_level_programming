#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of doubly linked list
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
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	tmp = head;

	if (index > len)
		return (NULL);
	for (i = 0; i < index; i++)
		tmp = tmp->next;
	return (tmp);
}
