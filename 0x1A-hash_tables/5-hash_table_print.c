#include "hash_tables.h"

/**
 * hash_table_print- prints a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, count = 0;
	hash_node_t *item;

	if (!ht)
	{
		printf("{}\n");
		exit(0);
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item)
		{
			if (!(item->key || item->value))
				continue;
			printf("'%s': '%s'", item->key, item->value);
			if (count < (ht->size - 1) && item->next != NULL)
			{
				printf(", ");
				count++;
			}
			item = item->next;
		}
	}
	printf("}\n");
}
