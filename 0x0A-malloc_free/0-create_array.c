#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create array of chars, & initializes it with specified
 *                 char
 * @size: size of array to be created
 * @c: value to "terraform" into freshly created array
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *car;
	unsigned int i;

	car = malloc(size * sizeof(char));
	if (car == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		car[i] = c;
	return (car);
}
