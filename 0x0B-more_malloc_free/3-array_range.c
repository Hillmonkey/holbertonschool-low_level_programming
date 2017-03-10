#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array on integers
 * @min: min value to put in array
 * @max: max value to put in array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *iray;
	int i, j = 0;

	if (min > max)
		return (NULL);
	iray = malloc(sizeof(int) * (1 + max - min));
	for (i = min; i <= max; i++, j++)
		iray[j] = i;
	return (iray);
}
