#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: size of hash table
 * Return: pointer of hash table or NULL if failed
 */
hash_table_t *hash_table_create(ul size)
{
	hash_table_t *ht = 0;
	ul i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}
