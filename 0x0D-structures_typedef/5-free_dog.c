#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs!
 * @d: pointer to struct of type dog_t
 * Return: void
 **/
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
