#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable type of struct dog
 * @d: The dog to be initialized
 * @name: name of dog
 * @age: age of the dog
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
