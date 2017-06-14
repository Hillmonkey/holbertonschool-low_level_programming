#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a parameter on each element
 *                 of an array
 * @array: array of ints
 * @size: size of array
 * @action: pointer to a function that accepts an int, returns void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
