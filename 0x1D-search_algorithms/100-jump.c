#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search in sorted array for value match
 * @array: sorted array of ints
 * @size: size of array
 * @value: search for this value in array
 * Return: index of matching element or -1 if no match
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t i, hi, lo = 0, idx = 1;
	double step = sqrt((double)size);

	if (array == NULL || size == 0 || value < array[0])
		return (-1);
	hi = (size_t)step;

	while (lo < size)
	{
		++idx;
		printf("Value checked array[%d] = [%d]\n", (int)lo, array[lo]);
		if (array[lo] <= value && value <= array[hi])
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)lo, (int)hi);
			for (i = 0; i + lo <= hi && i + lo < size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", (int)(i + lo), array[i + lo]);
				if (array[i + lo] == value)
					return (i + lo);
			}
		}
		lo = hi;
		hi  = (size_t)((double)idx * step);
	}

	return (-1);
}
