#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * @name: name to initialize.
 * @age: age to initialize.
 * @owner: owner to initialize.
 * @d: pointer.
 * Return: A pointer to the initialized struct dog, or NULL on failure.
 */

void init_dog(my_dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
