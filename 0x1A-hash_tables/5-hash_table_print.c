#include "hash_tables.h"

/**
 * hash_table_print - print key value pairs
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;

	printf("{");
	if (ht)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
				printed = 1;
			}

		}
	}
	printf("}\n");
}
