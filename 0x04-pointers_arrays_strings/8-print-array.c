#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by newline
 * @a: pointer to array a
 * @n: number of elements in array to be printed
 */
void print_array(int *a, int n)
{
	int len = 0;
	int i;

	len = sizeof(a)/sizeof(a[0]);
	printf("%i\n\n", len);
	if (n > len)
		n = len;
	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (!(i + 1 == n))
			printf(", ");
	}
	printf("\n");
}
