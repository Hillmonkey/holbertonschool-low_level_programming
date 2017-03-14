#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char (also functions as pointer to
 *    a string, which is an array of chars
 * Return: int representing the len of the string s
 */
int _strlen(char *s)
{
	int i = 0;
	char *tmp;

	tmp = s;
	while (*s != 0)
	{
		i++;
		s++;
	}
	s = tmp;
	return (i);
}

/**
 * _strcpy - copy string from src to dest
 * @dest: destination string
 * @src: source string
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

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

	this_dog->name = malloc(1 + _strlen(name) * sizeof(char));
	if (this_dog->name == NULL)
	{
		free(this_dog);
		return (NULL);
	}
	this_dog->name = _strcpy(this_dog->name, name);

	this_dog->age = age;

	this_dog->owner = malloc(1 + _strlen(owner) * sizeof(char));
	if (this_dog->owner == NULL)
	{
		free(this_dog->name);
		free(this_dog);
		return (NULL);
	}
	this_dog->owner = _strcpy(this_dog->owner, owner);

	return (this_dog);
}
