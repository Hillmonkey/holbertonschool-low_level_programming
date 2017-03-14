#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age in years, floats
 * @owner: name of dog owner
 * Descripton: Everyone wants dog info!
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
