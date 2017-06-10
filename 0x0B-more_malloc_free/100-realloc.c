#include "holberton.h"

/**
 * _realloc - homespun realloc
 * @ptr: pointer to currently allocated memory
 * @old_size: size in bytes of space allocated for pty
 * @new_size: size in bytes of new memory block
 * Return: pointer to realloc'ed memory
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr)
	{
		free (ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	/* ptr = (char *)ptr; -- useless ... */
	if (new_size < old_size)
	{
		for(i = 0; i < new_size; i++)
			new_ptr[i] = ((char *)ptr)[i];
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		for(i = 0; i < old_size; i++)
			new_ptr[i] = ((char *)ptr)[i];
		return (new_ptr);		
	}
	exit(EXIT_FAILURE);
} 
