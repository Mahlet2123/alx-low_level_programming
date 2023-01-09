#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t * new_shash_table;

	new_shash_table = malloc(sizeof(shash_table_t));
	if (new_shash_table == NULL)
		return (NULL);

	new_shash_table->size = size;
	new_shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_shash_table->array == NULL)
		return (NULL);
	new_shash_table->shead = NULL;
	new_shash_table->stail = NULL;

	return (new_shash_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_item, *entry;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (0);

	new_item = create_new_item(key, value);
	index = key_index((const unsigned char *)key, ht->size);

	/** try to look up the key index*/

}

shash_node_t *create_new_item(const char *key, const char *value)
{
	shash_node_t *new_item;

	new_item = malloc(sizeof(shash_node_t));
	if (new_item == NULL)
		return (0);

	new_item->key = malloc(strlen(key) + 1);
	new_item->value = malloc(strlen(value) + 1);
	new_item->next = NULL;
	new_item->sprev = NULL;
	new_item->snext = NULL;

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);

	return (new_item);
}
