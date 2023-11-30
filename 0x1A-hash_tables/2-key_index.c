#include "hash_tables.h"
/**
 * key_index - retrieves index of a key implementing the hash_djb2 function
 * @key: key string
 * @size: size of the array of a hash table
 * Return:  index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);


}
