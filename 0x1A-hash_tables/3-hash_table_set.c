#include "hash_tables.h"

/**
 * hash_table_set - adds element to a hash table
 *
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if successful 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node;

	if (!ht || !key || !value || !(strcmp(key, "")))
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = malloc(sizeof(char) * strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	idx = key_index((const unsigned char *) key, ht->size);

	if (!ht->array[idx])
		ht->array[idx] = new_node;
	else if (!(strcmp(ht->array[idx]->key, key)))
		ht->array[idx]->value = (char *) value;
	else
	{
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}

	return (1);
}
