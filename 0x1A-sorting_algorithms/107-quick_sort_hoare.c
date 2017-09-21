#include "sort.h"

/**
 * quick_sort_hoare - wrapper function to call recursive quick sort func
 * @array: array of ints
 * @size: size of array
 **/
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	/* use coustom function to make recursion easier */
	quick_sort_recurse(array, size, 0, size - 1);
}

/**
 * quick_sort_recurse - uses quick sort algorithm to sort array of integers
 * @array: array of ints
 * @size: size of array
 * @start: low index of sub-array
 * @end: high index of sub-array
 **/
void quick_sort_recurse(int *array, size_t size, int start, int end)
{
	int pidx;

	if (start >= end)
		return;

	/* -smaller values- | PIDX | -larger values- */
	pidx = partition(array, size, start, end);

	/* Recursively sort */
	quick_sort_recurse(array, size, start, pidx - 1); /* sort left side */
	quick_sort_recurse(array, size, pidx + 1, end); /* sort right side of set */
}

/**
 * partition - segregates values to either side of pivot: lower values to left
 *              greater values to the right
 * @array: array of ints
 * @size: size of array
 * @start: low index of sub-array
 * @end: upper bound index of sub-array
 * Return: updated array index of pivot
 **/
int partition(int *array, size_t size, int start, int end)
{
	int pivot, pidx, tmp, i, modified = FALSE;

	pivot = array[end]; /* set last value as pivot */
	pidx = start - 1; /* start from left --> right and compare */
	pidx2 = end - 1; /* start from right <-- left and compare */

	for (i = start; i < end; i++) /* go through the set */
	{
		if (array[i] < pivot)
		{  /* SWAP: put smaller values first */
			pidx += 1;
			if (i != pidx)
			{
				modified = TRUE;
				tmp = array[i];
				array[i] = array[pidx];
				array[pidx] = tmp;
			}
		}
	}

	modified = FALSE;
	for (j = i; j > start; j--)
	{
		if (array[j] >= pivot)
		{
			pidx -= 1;
			if (j != pidx2)
			{
				modified = TRUE;
				tmp = array[j];
				array[j] = array[pidx2];
				array[pidx2] = tmp;
			}
		}
	}
	if (modified)
		print_array(array, size); /* print if change occured */

	/* put the pivot value at its rightful place */
	if (array[end] < array[pidx + 1])
	{
		tmp = array[pidx + 1];
		array[pidx + 1] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}

	if (array[start] > array[pidx2 - 1])
	{
		tmp = array[pidx2 - 1];
		array[pidx2 - 1] = array[end];
		array[start] = tmp;
		print_array(array, size);
	}
	return (pidx + 1); /* return divide point of semi sorted array */
}
