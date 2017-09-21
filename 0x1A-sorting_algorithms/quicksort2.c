#include "sort.h"
#include <stdio.h>

/**
 * partition - partition subarray of `array` around pivot using
 * Hoare method (always choose right element).
 * @array: array to partition
 * @left: left end of subarray
 * @right: right end of subarray
 * @size: size of array
 *
 * Return: index of pivot after it has been sorted
 */
int partition(int *array, int left, int right, size_t size)
{
	int i, j, tmp, pivot;

	pivot = array[right];
	j = right - 1;
	for (i = left; i < right; i++)
	{
		if ((array[i] >= pivot) || (i >= j))
			break;
	}
	for (; j > left; j--)
	{
		if ((array[j] < pivot) || (i >= j))
			break;
	}
	if (array[i] >=	 pivot)
	{
		tmp = array[i];
		array[i] = pivot;
		array[right] = tmp;
		print_array(array, size);
	}
	else
	{
		tmp = array[i];
		array[i] = pivot;
		array[right] = tmp;
		print_array(array, size);
	}

	return (j);
}

/**
 * _quick_sort - recursively partition array until it is fully sorted
 * @array: array to sort
 * @left: left side of subarray for recursion
 * @right: right side of subarray for recursion
 * @size: size of array
 */
void _quick_sort(int *array, int left, int right, size_t size)
{
	int p;

	if (left < right)
	{
		p = partition(array, left, right, size);
		if (p)
			_quick_sort(array, left, p - 1, size);
		_quick_sort(array, p + 1, right, size);
	}
}

/**
 * quick_sort_hoare - wrapper around recursive quicksort function
 * @array: array to sort
 * @size: size of array
 */
void quick_sort_hoare(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}
