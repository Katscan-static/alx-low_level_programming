#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints information about a dog
 * @d: dog struct to be printed
 */

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (!d)
		return;
	if (!(d->name))
		printf("Name: %s\n", nil);
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!(d->owner))
		printf("Owner: %s\n", nil);
	else
		printf("Owner: %s\n", d->owner);
}
