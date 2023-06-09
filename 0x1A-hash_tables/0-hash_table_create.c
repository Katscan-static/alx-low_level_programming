#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: The size of the hash table
 *
 * Return: pointer to new hash table or null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;

	return (new_hash_table);

}
