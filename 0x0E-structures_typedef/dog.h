#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the woner of dog
 *
 * Description: contains all properties of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
