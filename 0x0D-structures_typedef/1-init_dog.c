#include "dog.h"
#include <stlib.h>

/**
 * init_dog - initiales dog struct
 * @d: pointer to an instance of dog struct
 * @name: string representing dog's name
 * @age: float representing dog's age
 * @owner: string representing dog owner's name
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
