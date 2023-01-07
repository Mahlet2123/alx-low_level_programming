#include "hash_tables.h"

/**
 * hash_table_delete- deletes a hash table
 * @ht: ht is the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item, *temp;

	if (!ht)
		exit(0);

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item)
		{
			temp = item;
			free(temp->key);
			free(temp->value);
			item = item->next;
		}
	}
	free(ht->array);	
	free(ht);
}
