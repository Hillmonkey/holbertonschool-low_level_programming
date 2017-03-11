#include "holberton.h"
#include <stdlib.h>

/**
 * faster_calloc - this function pushes 0s to malloc'ed memory, 8 bytes at
 *                 at a time!
 * @nmemb: the number of array members to make space for
 * @size:  the number of bytes in each array member
 * Return
 */
void *faster_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *cptr;
	unsigned long int *uliptr;
	unsigned int i;
	unsigned long int bigStep, total = 0;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = size * nmemb;
	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	uliptr =  (unsigned long int *)ptr; /* casting type of pointer car */
	bigStep = total / sizeof(unsigned long int); /* how many 4 byte chunks? */

	/* push zeros into memory, 4 bytes at a time */
	for (i = 0; i < bigStep; i++)
		uliptr[i] = 0;

	cptr = (char *)uliptr; /* pushing pointer location from one type to another */

	/* code below breaks if sizeof(char) != 1 */
	/* this 2nd loop takes care of remainder of total div 4 */
	for (i = bigStep * sizeof(unsigned long int); i < total; i++)
		cptr[i] = 0;
	return (cptr);
}
