#include "function_pointers.h"

/**
 * int_index - search for integer based on funtion that returns boolean
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to a function as specified in prototype
 * Return: int representing index in array where first match exists
 *         else, return -1 if no match or other error occurs
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
		if ((*cmp)(array[index]))
			return (index);
	return (-1);
}
