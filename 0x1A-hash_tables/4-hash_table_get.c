#include "hash_tables.h"

/**
 * hash_table_get - get values from a hash table
 * @ht: hash table
 * @key: key
 *
 * Return: value on success and NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);

	node = ht->array[idx];

	while (node)
	{
		if (!(strcmp(node->key, key)))
		{
			if (node->value == NULL)
				return ("(null)");
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}
