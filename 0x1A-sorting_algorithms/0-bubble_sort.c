#include "sort.h"
/**
 * bubble_sort - sorts an array of int in ascending order and prints every swap
 * @array: array of ints to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, mysize = size;
	int temp, sorted = 1;

	while (mysize)
	{
		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		if (sorted == 1)
			break;
		mysize--;
	}
}
