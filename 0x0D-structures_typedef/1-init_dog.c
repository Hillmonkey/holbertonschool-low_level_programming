#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes dog struct
 * @d: pointer to a dog struct
 * @name: string representing dog's age
 * @age: float representing dog's age
 * @owner: stirng representing dog owner's name
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
