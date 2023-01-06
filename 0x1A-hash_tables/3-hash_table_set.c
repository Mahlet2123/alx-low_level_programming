#include "hash_tables.h"

/**
 * hash_table_set- adds an element to the hash table.
 * @ht: hash table
 * @key: The key, string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *entry;
	unsigned long int index;

	new_item = create_new_item(key, value);
	index = key_index((const unsigned char *)key, ht->size);
	/** try to look up the key index*/
	entry = ht->array[index];
	if (entry == NULL)
		ht->array[index] = new_item;
	if (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}
		else
		{
			ht->array[index] = new_item;
			new_item->next = entry;
			return (1);
		}
	}
	/**free_item(new_item);*/
	return (0);
}
/**
 * create_new_item- creates new item
 * @key: The key, string
 * @value: value associated with key
 * Return: pointer to the item
 */
hash_node_t *create_new_item(const char *key, const char *value)
{
	hash_node_t *new_item;

	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (NULL);
	new_item->key = (char *) malloc(strlen(key) + 1);
	new_item->value = (char *) malloc(strlen(value) + 1);
	new_item->next = NULL;

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	return (new_item);
}
/**
 * free_item- freesallocated item
 * @item: created item
 * Return: void
 */
void free_item(hash_node_t *item)
{
	if (item != NULL)
		free(item);
}
