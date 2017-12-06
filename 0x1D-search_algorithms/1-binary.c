#include "search_algos.h"

/**
 * print_array - print array of ints
 * @array: array of ints
 * @size: size of array
 **/
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i == size - 1)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - search recursively in sorted list
 * @array: array of ints
 * @size: size of array
 * @value: value to match in search
 * Return: index of matching array element, or -1 if no match
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t mid;

	print_array(array, size);
	mid = size / 2;

	if (size < 1 || array == NULL)
		return (-1);
	else if (size == 1)
	{
		if (array[0] == value)
		{
			printf("=== size->1 and a match!!! ====\n");
			return (0); /* how to return correct position??? */
		}
		else
			return (-1);
	}
	else  /* size > 1 */
	{
		if (array[mid] == value)
		{
			//printf("==== a match!!! =====\n");
			return (mid);
		}
		if (array[mid] > value)
		{
			//printf("=== go low =======\n\t");
			//print_array(array, mid);
			binary_search(array, mid, value);
			return (mid);
		}
		if (array[mid] < value)
		{
			//printf("==== go high =======\n\t");
			//print_array(&(array[mid + 1]), size - mid - 1);
			binary_search(&(array[mid + 1]), size - mid - 1, value);
			return (mid);
		}
		else
		{
			//printf("not low, mid, or high, what the fuck!!!\n");
			//printf("\t%d != %d, mid = %lu\n", array[mid], value, (unsigned long)mid);
			return (777);
		}
	}
}
