#include "holberton.h"

/**
 * reverse_array -  accepts array of ints and reverses them in place
 * @a: pointer to array of ints
 * @n: int representing size of array 'a'
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
