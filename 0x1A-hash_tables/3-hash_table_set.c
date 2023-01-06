#include "hash_tables.h"

/**
 * hash_table_set- adds an element to the hash table.
 *
 * Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *entry;
	unsigned long int index;

	new_item = create_new_item(key, value);
	index = key_index(key, ht->size);
	/** try to look up the key index*/
	entry = ht->array[index];
	if (entry == NULL)
	{
		ht->array[index] = create_new_item(key, value);
	}
	else
	{
		free_item(new_item);
		return (0);
	}
	return (1);
}

hash_node_t *create_new_item(const char *key, const char *value)
{
	hash_node_t *new_item;
       
	new_item = malloc (sizeof(hash_node_t));
	if (new_item == NULL)
		return NULL;
	new_item->key = (char*) malloc(strlen(key) + 1);
	new_item->value = (char*) malloc(strlen(value) + 1);
	new_item->next = NULL;

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	return (new_item);
}

void free_item(hash_node_t *item)
{
	if (item != NULL)
		free(item);
}
