#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age in years (float)
 * @owner: name of dog owner
 * Return: pointer to dog_t struct
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *this_dog;

	this_dog = malloc(sizeof(dog_t));
	if (this_dog == NULL)
		return (NULL);
	this_dog->name = name;
	this_dog->age = age;
	this_dog->owner = owner;

	return (this_dog);
}
