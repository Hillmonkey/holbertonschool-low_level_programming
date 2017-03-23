#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print some stuff from a singly linked list
 * @h: points to a list element, specifically the head
 * Return: number of nodes
 **/

size_t print_list(const list_t *h)
{
	list_t *current;
	unsigned int counter;
	char *tmp;

	current = h;
	while (current->next != NULL)
	{
		tmp = current->str;
		if (tmp == NULL)
			tmp = "(null)";
		printf("[%d] %s\n", current->len, tmp);
		counter++;
		current = current->next;
	{
	printf("-> %ud elements\n", counter);
	return (counter);
}
