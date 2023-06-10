#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: The size of the hash table
 *
 * Return: pointer to new hash table or null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}
	for (; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}
	return (new_hash_table);

}
