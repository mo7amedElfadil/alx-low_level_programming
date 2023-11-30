#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key string
 * @value: value associated with key
 * Return: 1 success, 0 failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ul idx = 0;
	hash_node_t *new;

	if (!ht || !key || !*key)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t *));

	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	strcpy(new->key, key);
	strcpy(new->value, value);
	if (!ht->array[idx])
	{
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[idx];
	}
	ht->array[idx] = new;
	return (1);
}
