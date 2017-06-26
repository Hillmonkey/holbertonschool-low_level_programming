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
	for (len = 0; tmp != NULL; len++, tmp = tmp->next)
		;

	if (index > len)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
