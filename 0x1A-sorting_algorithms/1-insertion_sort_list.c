#include "sort.h"

/**
 * extract_node - pull node out of doubly-linked list, stitch together previous
 *                and next nodes.
 * @node: pointer to a node in a double linked list
 **/
void extract_node(listint_t *node)
{
	if (node->next != NULL)
		node->next->prev = node->prev;
	if (node->prev != NULL)
		node->prev->next = node->next;
	node->next = NULL;
	node->prev = NULL;
}

/**
 * insert_head - inserts new head at head of list ALSO, extract new_head from
 *				 previous location
 * @list: double pointer to head of doubly-linked list
 * @new_head: pointer to node that needs to be relocated to head of list
 * TODO: consider joining what was left behind in new_head's old location
 **/
void insert_head(listint_t **list, listint_t *new_head)
{
	extract_node(new_head);

	if (*list == NULL)
	{
		*list = new_head;
		new_head->prev = new_head->next = NULL;
		return;
	}
	/* non-edge case */
	(*list)->prev = new_head;
	new_head->next = *list;
	new_head->prev = NULL;
	*list = new_head;
}

/**
 * swap_adjacent - swap adjacent nodes
 * @head: pointer to head node
 * @before: pointer to node that is before after
 * @after: pointer to node that after before
 **/
void swap_adjacent(listint_t **head, listint_t *before, listint_t *after)
{
	int head_swap = FALSE;

	if (*head == before)
		head_swap = TRUE;
	extract_node(after); /* free after node from attachments */

	/* now that after is free, insert after-node  before before-node */
	after->prev = before->prev;
	if (before->prev)
		after->prev->next = after;
	after->next = before;
	before->prev = after;
	if (head_swap)
		*head = after;
}

/**
 * insert_node - Insert swap_node after targer_node
 * @target_node: pointer to target node in doubly linked list
 * @swap_node: pointer to node to be moved before the current node
 **/
void insert_node(listint_t *target_node, listint_t *swap_node)
{

	extract_node(swap_node);

	swap_node->next = target_node->next;
	swap_node->prev = target_node;
	target_node->next = swap_node;

	if (swap_node->next)
		swap_node->next->prev = swap_node;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using INSERTION SORT
 * @list: double pointer to doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *back_node;

	if (list == NULL || *list == NULL)
		exit(EXIT_FAILURE);

	while (current->next)
	{
		back_node = current;
		/* validate order */
		if (back_node->n > back_node->next->n)
		{
			/* swap forward if current > next node */
			swap_adjacent(list, back_node, back_node->next);
			print_list(*list);
			back_node = back_node->prev;
			while (back_node->prev != NULL && back_node->n < back_node->prev->n)
			{
				/* swap back one step and print */
				swap_adjacent(list, back_node->prev, back_node);
				print_list(*list);
			}

		}
		/* increment to next node */
		/* is this going to mess with the while loop??? */
		if (current->next == NULL)
			break;
		if (current->next && current->n < current->next->n)
		{
			current = current->next;
		}
	}
}
