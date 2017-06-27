#include "lists.h"

/**
 * delete_nodeint_at_index - delete singly linked list node at index
 * @head: pointer to pointer to head of linked list
 * @index: index of node to be deleted, index starts at zero
 * Return: 1 on success, -1 on failure
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int len, i;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (len = 0; (tmp && tmp->next); len++)
		tmp = tmp->next;
	tmp = *head;
	if (index <= len)
	{
		for (i = 0; i < index; i++)
		{
			prev = tmp;
			if (tmp != NULL)
				tmp = tmp->next;
		}
		if (prev->next && prev->next->next)
			prev->next = prev->next->next;
		if (tmp)
		{
			free(tmp);
			return (1);
		}
	}
	return (-1);

}
