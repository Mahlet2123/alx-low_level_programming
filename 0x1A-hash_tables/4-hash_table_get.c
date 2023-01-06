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
	hash_node_t *entry;

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];
	if (entry == NULL)
		return (NULL);
	return (entry->value);
}
