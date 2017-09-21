#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * the Shell sort algorithm
 * Got help from GreeksforGeek.com
 * @array: pointer to array of ints
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int i, j, gap;
	int tmp;

	if (array == NULL || size < 2)
		return;

	/* find the approprote gap for our size array */
	for (gap = 1; gap < size / 3; gap = gap * 3 + 1)
		;
	/* reduce gap for each loop */
	for (; gap > 0; gap = (gap - 1) / 3)
	{	/* start at gap and compare from start of array */
		for (i = gap; i < size; i++)
		{
			tmp = array[i]; /* compare gap value with element */
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
