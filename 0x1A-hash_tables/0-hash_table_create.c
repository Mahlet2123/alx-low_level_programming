#include "hash_tables.h"

/**
 * hash_table_create- creates a hash table.
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, returns NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t * new_hash_table;
	
	if (!size)
		return NULL;
	
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return NULL;
	
	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t*) * size);

	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return NULL;
	}

	return new_hash_table;
}
