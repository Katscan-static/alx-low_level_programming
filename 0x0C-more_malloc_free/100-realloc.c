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
	unsigned int m_hold = new_size;
	char *p;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr && new_size)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}

	p = malloc(old_size);

	if (!p)
		return (NULL);
	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
		m_hold = old_size;

	for (i = 0; i < m_hold; i++)
		p[i] = ptr[i];
	free(ptr);
	ptr = malloc(new_size);
	if (!ptr)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < m_hold; i++)
		ptr[i] = p[i];
	free(ptr);
	return (ptr);
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
