#include "search_algos.h"

/**
 * print_subarray - print a portion of the array
 * @array: an array of ints
 * @lo: lo index of subarray
 * @hi: hi index of subarray
 **/
void print_subarray(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i == hi)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - helper function for recursively searching sorted list
 * @array: array of ints
 * @size: size of array
 * @value: value to match in search
 * Return: index of matching array element, or -1 if no match
 **/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	print_subarray(array, 0, size - 1);
	return (recurs_search(array, (size_t)0, size - 1, value));
}


/**
 * recurs_search - do the recursive part of the binary search
 * @array: array of ints
 * @lo: lo index of subarray
 * @hi: hi index of subarray
 * @value: value to match in search
 * Return: index of matching array element, or -1 if no match
**/

int recurs_search(int *array, size_t lo, size_t hi, int value)
{
	size_t guess, tmp;
	int ret;

	guess = (lo + hi + 1) / 2;
	tmp = (lo + hi) / 2;

	if (lo > hi)
		return (-1);
	else if (lo == hi)
	{
		print_subarray(array, lo, hi);
		if (array[lo] == value)
			return (lo);
		else
			return (-1);
	}
	else /* lo < hi */
	{
		if (array[guess] == value && guess == tmp) /* odd # of elements */
			return (guess);
		if (value >= array[guess]) /* go hi */
		{
			print_subarray(array, guess, hi);
			ret = (recurs_search(array, guess + 1, hi, value));
		}
		else  /* value < array[guess] */
		{
			print_subarray(array, lo, guess - 1);
			ret = (recurs_search(array, lo, guess - 1, value));
		}
	}
	return (ret);
}
