#include "hash_tables.h"

/**
 * hash_table_print - print key value pairs
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *node;

	if (ht)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					if (printed)
						printf(", ");
					printf("'%s': '%s'", node->key,
						node->value);
					printed = 1;
					node = node->next;
				}
			}

		}
		printf("}\n");
	}
}
