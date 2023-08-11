#include "hash_tables.h"

/**
 * key_index - gets the index for key given
 * @key: key (string) to hash
 * @size: size of array of the hash table
 * Return: index at which the key/value pair is stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
