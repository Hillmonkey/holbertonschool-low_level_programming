#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog!!!
 * @d: pointer to an instance of dog struct
 *
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name != NULL)
		printf("%s\n", d->name);
	else
		puts("(nil)");

	printf("Age : ");
	if (&d->age == NULL)
		printf("(nil)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");
	if (d->name != NULL)
		printf("%s\n", d->owner);
	else
		puts("(nil)");
}
