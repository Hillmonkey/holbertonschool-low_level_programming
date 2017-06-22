#include "lists.h"

/**
 * list_len - returns length of list
 * @h: pointer to head of list
 * Return: length of list
 **/

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *walk;

	walk = h;
	while (walk)
	{
		walk = walk->next;
		len++;
	}
	return (len);
}
