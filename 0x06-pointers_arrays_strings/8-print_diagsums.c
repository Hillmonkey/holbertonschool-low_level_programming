#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums  - print the sum of two diagonals of a square matrix
 *		of integers
 * @a: pointer that is a pointer to a 2x array that has been cast to
		a 1x array
 * @size: integer representing the size of the square
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + (size - 1) * (i + 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
