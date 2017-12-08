#include "search_algos.h"

/**
 * interpolation_search - search sorted array by linear extrapolation
 * @array: sorted array of ints
 * @size: size of array
 * @value: int that is being searched for in array
 * Return: index of matching array element, or -1 if there is no match
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (array == NULL || size == 0 || value < array[0])
		return (-1);
	lo = 0;
	hi = size - 1;
	pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				 (value - array[lo]));

	while (lo < hi && pos < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
					 (value - array[lo]));
	}
	return (-1);
}
