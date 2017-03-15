#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 *                  of an array.  (how cool is that?!?)
 * @array: array of ints
 * @size: size of array (total bytes, or total elements?)
 * @action: pointer to function that accepts an int, returns void
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
