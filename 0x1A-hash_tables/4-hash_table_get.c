#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 * @ht: pointer to hash table
 * @key: key string
 * Return: value if found / NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht || !key || !ht->array || !ht->size || !*key)
		return (NULL);
	node = ht->array[key_index((unsigned char *)key, ht->size)];

	if (!node)
		return (NULL);
	while (node && strcmp(node->key, key))
		node = node->next;
	if (!node)
		return (NULL);
	return (node->value);
}
