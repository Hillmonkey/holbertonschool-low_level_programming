#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: is an array of ints
 * @size: number of elements in array
 * @cmp: pointer to a function that compares two values
 * Return: index of the first element for which the cmp function does not
 *          return 0, if size <= 0, return -1
 *          if no element matches, return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		x = (*cmp)(array[i]);
		if (x != 0)
			return (i);
	}
	return (-1);
}
