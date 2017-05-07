#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_node: prints a node in a doubly linked list
 * @node: pointer to a node
 * Return: void
 **/

void print_node(dlistint_t *node)
{
	puts("====NODE=====");
	printf("n: %d", node->n);
	printf("prev: %p", node->prev);
	printf("next: %p", node->next);
	puts;
}
