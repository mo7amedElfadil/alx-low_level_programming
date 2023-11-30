#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	ul i;
	hash_node_t *hd, *prev;

	if (!ht || !ht->array || !ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hd = ht->array[i];
		while (hd)
		{
			prev = hd;
			hd = hd->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
