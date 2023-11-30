#include "hash_tables.h"
/**
 * hash_table_print - print the hash table in a dict format
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	ul i, f_pt = 0;
	hash_node_t *hd;

	if (!ht || !ht->array || !ht->size)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hd = ht->array[i];
		while (hd)
		{
			if (f_pt)
				printf(", ");
			printf("'%s': '%s'", hd->key, hd->value);
			if (!f_pt)
				f_pt = 1;
			hd = hd->next;
		}
	}
	printf("}\n");
}
