#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - returns array of chars inited to char c
 * @size: size of array
 * @c: char to be copied into all cells of array
 * Return: we call it an array of chars, looks like a string to me!
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
