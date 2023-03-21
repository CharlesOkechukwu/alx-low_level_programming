#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function to initiate a structure
 * @d: the structure to initialize
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
