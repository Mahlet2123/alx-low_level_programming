#include "hash_tables.h"

/**
 * hash_table_print- prints a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;

	if (!ht)
	{
		printf("{}\n");
		exit(0);
	}
	item = ht->array[i];
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (item)
		{
			if (!(item->key || item->value))
				continue;
			printf("'%s': '%s'", item->key, item->value);
		}
	}
	printf("}\n");
}
