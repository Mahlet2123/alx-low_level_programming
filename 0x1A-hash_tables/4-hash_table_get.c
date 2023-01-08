#include "hash_tables.h"

/**
 * hash_table_get- retrieves a value
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !key || !(*key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		if (strcmp(item->key, key) != 0)
			item = item->next;
	}
	return (NULL);
}
