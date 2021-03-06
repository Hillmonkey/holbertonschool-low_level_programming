#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * print_array - prints subarray to stdout
 * @array: array of ints
 * @lo: low index to print
 * @hi: upper index of range to print
 * Return: nada
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t walker;

	printf("Searching in array: ");
	for (walker = lo; walker <= hi; walker++)
	{
		printf("%d", array[walker]);
		if (walker != hi)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - returns index of value in sorted array
 * @array: array of ints of size size
 * @size: size of array
 * @value: search target
 * Return: index of matched value in array, or -1 if no match
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi, mid;

	if (size == 0)
		return (-1);
	hi = size - 1;
	mid = (hi - lo) / 2;
	while (!(lo > hi))
	{
		print_array(array, lo, hi);
		/* printf("lo %lu, mid %lu, hi %lu\n", lo, mid, hi); */
		if (lo == hi)
			return (-1);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
		{
			hi = mid;
			mid = ((hi + lo) / 2);

		}
		else
		{
			lo = mid + 1;
			mid = ((hi + lo) / 2);
		}
	}

	return (-1);
}
