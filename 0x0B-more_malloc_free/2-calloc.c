#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements of array to be created
 * @size: element size, in bytes
 * Return: pointer to array, or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *voidstar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	voidstar = malloc(nmemb * size);
	if (voidstar == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		voidstar[i] = '\0';
	return ((void *)voidstar);
}

