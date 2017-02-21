#include "holberton.h"

/**
 * swap_int - Swaps values of two integers
 * @a: pointer to an int
 * @b: pointer to another int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
