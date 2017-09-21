#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 * @array: pointer to array of ints
 * @size: size of array
 **/
void selection_sort(int *array, size_t size)
{
	size_t j, idx, min_idx;
	int tmp;

	if (array == NULL)
		return;

	for (j = 0; j < size; j++) /* go through array */
	{
		min_idx = j; /* numbers before j have already been sorted */
		for (idx = j; idx < size; idx++) /* look for next min value */
			if (array[idx] < array[min_idx]) /*update min position*/
				min_idx = idx;
		if (min_idx != j) /* Dont swap in place */
		{ 	/* put minimum value first */
			tmp = array[j];
			array[j] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
