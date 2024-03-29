#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc dog
 * @d: struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
