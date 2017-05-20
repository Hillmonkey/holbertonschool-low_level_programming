#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: head of dlist
 * @index: index to delete a node at
 *        NOTE: THIS CODE IS LIFTED FROM TIM BRITTON'S REPO
 *        WHY:  I need a properly functioning function to succsessfully
 *              implement data structures that build on top of the
 *              doubly-linked list
 * Return: Returns 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *walk, *next, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	walk = *head;
	i = 0;
	while (i != index)
	{
		if (walk == NULL)
			return (-1);
		walk = walk->next;
		i++;
	}
	if (walk == NULL)
		return (-1);
	next = walk->next;
	prev = walk->prev;
	if (index == 0)
	{
		if (walk->next != NULL)
		{
			*head = walk->next;
			next->prev = NULL;
		}
		else
		{
			free(walk);
			*head = NULL;
			return (1);
		}
	}
	else
		prev->next = next;
	if (next != NULL)
		next->prev = prev;
	free(walk);
	return (1);
}
