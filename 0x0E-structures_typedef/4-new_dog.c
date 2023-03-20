#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * new_dog - copies data from old dog struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t type and NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *n, *o;

	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (!d || !name || !owner)
		return (NULL);
	while (name[i])
		i++;
	while (owner[j])
		j++;
	n = malloc(i + 1);
	if (!n)
	{
		free(d);
		return (NULL);
	}
	o = malloc(j + 1);
	if (!o)
	{
		free(n);
		free(d);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (j = 0; owner[j]; j++)
		o[j] = owner[j];
	o[j] = '\0';
	d->name = n;
	d->owner = o;
	d->age = age;

	return (d);
}
