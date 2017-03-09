#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: pointer to unsigned int
 * return: pointer to allocated memory or 98 if malloci is unsuccessful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
