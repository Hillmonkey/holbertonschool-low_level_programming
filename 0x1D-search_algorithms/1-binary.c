#include "search_algos.h"

/**
 *
 *
 **/
void print_array(int *array, size_t size)
{
	size_t i;
	char first_pass = TRUE;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i == size - 1)
			printf("\n");
		else if (first_pass == FALSE)
			printf(", ");
		else
			printf(" ");
		first_pass = FALSE;
	}
	return;
}
/**
 * binary_search - search recursively in sorted list
 *
 *
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t mid;

	print_array(array, size);
	mid = size / 2;
	if (size != 0)
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			binary_search(array, mid, value);
		else
			binary_search(&array[mid], size - mid, value);
	if (size == 0)
		return (-1);
	return (-1);
}
