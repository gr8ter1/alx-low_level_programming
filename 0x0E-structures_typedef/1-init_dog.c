#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable type struct dog
 * @d: dog to be initialized
 * @name: name of son to be initialized
 * @age: age of dog to be initialized
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
