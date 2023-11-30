#include "hash_tables.h"
#include <string.h>
/**
 * new_node - creates a new element node
 * @key: key string
 * @value: value associated with key
 * Return: pointer to node success, NULL failure
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->key)
	{
		free(new->key);
		free(new);
		return (0);
	}
	return (new);
}


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
	hash_node_t *new, *search;

	if (!ht || !key || !ht->array || !ht->size || !*key || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	for (search = ht->array[idx]; search && search->next ; search = search->next)
	{
		if (!strcmp(key, search->key))
		{
			free(search->value);
			search->value = strdup(value);
			if (!search->value)
				return (0);
			return (1);
		}
	}
	new = new_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
