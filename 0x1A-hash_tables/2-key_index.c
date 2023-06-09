#include "hash_tables.h"


/**
 * key_index - gives the index of a key
 * @key: The key as a string
 * @size: size of the hash table
 *
 * Return: the index for the specific key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
