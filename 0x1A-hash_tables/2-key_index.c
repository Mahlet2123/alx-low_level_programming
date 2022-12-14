#include "hash_tables.h"

/**
 * key_index- gives you the index of a key.
 * @key: The key, string
 * @size: The size of the array
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;
	return (key_index);
}
