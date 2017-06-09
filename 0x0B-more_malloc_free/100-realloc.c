#insert "holberton.h"

/**
 * _realloc - homespun realloc
 * @ptr: pointer to currently allocated memory
 * @old_size: size in bytes of space allocated for pty
 * @new_size: size in bytes of new memory block
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned in new_size);
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free (ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (new_size < old_size)
	{
		for(i = 0; i < new_size; i++)
			new_ptr[i] = ptr[i];
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		for(i = 0; i < old_size; i++)
			new_ptr[i] = ptr[i];
		return (new_ptr);		
	}
	exit(EXIT_FAILURE);
} 
