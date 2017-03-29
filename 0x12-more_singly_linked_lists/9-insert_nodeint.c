#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * split - split one list into two, break at idx
 * @head: head of original list
 * @idx: index where break should occur
 * Return: pointer to head of 2nd linked list (1st head returns by virtue of
 *        being a pointer ...
 **/
listint_t *split(listint_t *head, unsigned int idx)
{
	listint_t *head2;
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	if (i < idx)
		return (NULL);
	tmp = head;
	for (i = 1; i < idx; i++)
		tmp = tmp->next;
	head2 = tmp->next;
	tmp->next = (NULL);
	return (head2);
}

/**
 * join - accepts two lists, and appends list#2 to end of list#1
 * @h1: pointer to head of first list
 * @h2: pointer to head of 2nd list
 * Return: pointer to head of joined list
 **/
listint_t *join(listint_t *h1, listint_t *h2)
{
	listint_t *tmp;

	tmp = h1;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = h2;
	return (h1);
}

/**
 * insert_nodeint_at_index - the name says it all!
 * @head: pointer to a pointer to head of linked list
 * @idx: index representing position in lnkedLst where new node shouldbe
 *         be inserted
 * @n: value to be put in node
 * Return: address of new node, or NULL on failure
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *head2;
	listint_t *new;
	listint_t *success;
	unsigned int i;

	tmp = *head;
	if (idx == 0)
	{
		/* insert at beginning */
		success = add_nodeint_end(head, idx);
		if (success)
			return (*head);
		else
			return (NULL);
	}
	/* if idx > size_of_list THEN bail */
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	if (idx > i)
		return (NULL);
	/* if idx = size_of_list THEN insert at tail */
	if (idx == i)
	{
		*head = add_nodeint_end(head, n);
		return (*head);
	}
	/* break_in_two */
	head2 = split(*head, idx);
	/* insert at tail of head */
	new = add_nodeint_end(head, n);
	/*join (list1, list2) */
	*head = join(*head, head2);
	return (new);
}
