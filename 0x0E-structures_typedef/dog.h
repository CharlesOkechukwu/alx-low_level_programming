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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
