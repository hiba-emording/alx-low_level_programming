#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the information of a struct dog
 * @d: pointer to the struct dog to print
 */

void print_dog(my_dog *d)
{

	if (d == NULL)
		return;

	printf("my_dog.name = %s\n", (d->name != NULL) ? d->name : "(nil)");

	printf("my_dog.age = %.6f\n", d->age);

	printf("my_dog.owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
