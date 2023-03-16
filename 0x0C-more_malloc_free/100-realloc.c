#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reall_compute - re-allocate memory
 * @ptr: pointer to memory to be allocated
 * @old_size: old size
 * @new_size: new  size
 * Return: pointer or NULL on failure
 */

char *reall_compute(char *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *p;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		free(ptr);
		return (p);
	}

	p = malloc(new_size);

	if (!p)
		return (NULL);
	if (old_size == new_size)
		return (ptr);

	for (i = 0; i < old_size; i++)
		p[i] = ptr[i];
	free(ptr);
	return (p);
}

/**
 * _realloc - re-allocate memory
 * @ptr: pointer to memory to be allocated
 * @old_size: old size
 * @new_size: new  size
 * Return: pointer or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	return (reall_compute(ptr, old_size, new_size));
}
