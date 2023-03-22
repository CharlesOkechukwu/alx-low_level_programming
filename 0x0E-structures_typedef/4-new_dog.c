#include "dog.h"
#include <stdlib.h>

int len(char *s);
char *_copy(char *dest, char *src);

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: char
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nlen = 0, olen = 0;

	if (name != NULL && owner != NULL)
	{
		nlen = len(name) + 1;
		olen = len(owner) + 1;
		new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
			return (NULL);

		new_dog->name = malloc(sizeof(char) * nlen);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = malloc(sizeof(char) * olen);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->name = _copy(new_dog->name, name);
		new_dog->owner = _copy(new_dog->owner, owner);
		new_dog->age = age;
	}
	return (new_dog);
}

/**
 * len - string length
 * @s: string
 *
 * Return: int
 */

int len(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
 * _copy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: char
 */

char *_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
