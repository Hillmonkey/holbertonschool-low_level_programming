#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in doubly linked list
 * @head: double pointer to head of list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	tmp = *head;
	for (i = 0; tmp && i <= index; i++, tmp = tmp->next)
	{
		if (tmp->next == NULL)
		{
			if (i == 0 && index == i)
			{
				free(tmp);
				*head = NULL;
				return (1);
			}
			else if (index == i)
			{
				tmp->prev->next = NULL;
				free(tmp);
				return (1);
			}
			else
				return (-1);
		}
		if (index == i && i > 0)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		if (index == i && i == 0)
		{
			*head = (*head)->next;
			tmp->next->prev = NULL;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
