#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: pointer to head of list
 * @index: position in list to grab node (indexed to zero)
 * Return: pointer to desired node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;
	unsigned int i;
	listint_t *tmp;

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
