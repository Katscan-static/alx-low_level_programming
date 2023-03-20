#include "dog.h"
#include <stdio.h>


/**
 * init_dog - function that initialises struct
 * @d: pointer t dog struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}



