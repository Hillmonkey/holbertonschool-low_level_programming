#include "search_algos.h"

/**
 * linear_search - searches through array and finds index of match for value
 * @array: pointer to an array of ints
 * @size: size of array
 * @value: value to search for in array
 * Return: index of matching array element, or -1 if no match is found
 **/

int linear_search(int *array, size_t size, int value)
{
	int i, ret = -1;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
			ret = i;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (ret);
}
