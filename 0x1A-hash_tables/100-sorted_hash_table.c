#include "hash_tables.h"


/**
 * shash_table_create - Create a hash table
 * @size: size of hash table
 * Return: pointer of hash table or NULL if failed
 */
shash_table_t *shash_table_create(ul size)
{
	shash_table_t *ht = 0;
	ul i = 0;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}


/**
 * snew_node - creates a new element node
 * @key: key string
 * @value: value associated with key
 * Return: pointer to node success, NULL failure
 */
shash_node_t *snew_node(const char *key, const char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));

	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = NULL;
	new->snext = NULL;
	new->sprev = NULL;
	return (new);
}

int insertion_sort_new_node(shash_table_t *ht, ul idx,
		const char *key, const char *value)
{
	shash_node_t *new, *tmp;

	new = snew_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[idx],	ht->array[idx] = new;
	if (!ht->shead)
		ht->shead = ht->stail = new;
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->key, new->key) <= 0)
			tmp = tmp->snext;
		if (!tmp->sprev)
		{
			if (strcmp(tmp->key, new->key) >= 0)
			{
				ht->shead = new;
				new->snext = tmp;
				tmp->sprev = new;
			}
			else
			{
				new->sprev = tmp;
				if (!tmp->snext)
					ht->stail = new;
				tmp->snext = new;
			}
			return (1);
		}
		else if (!tmp->snext)
			ht->stail = new;
		else
		{
			tmp = tmp->sprev, tmp->snext->sprev = new;
		}
		new->sprev = tmp, new->snext = tmp->snext;
		tmp->snext = new;
	}
	return (1);
}


/**
 * shash_table_set - adds an element to the shash table
 * @ht: pointer to hash table
 * @key: key string
 * @value: value associated with key
 * Return: 1 success, 0 failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	ul idx = 0;
	shash_node_t  *search;

	if (!ht || !key || !ht->array || !ht->size || !*key || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	for (search = ht->array[idx]; search; search = search->next)
	{
		if (!strcmp(key, search->key))
		{
			char *new_val = strdup(value);

			if (!new_val)
				return (0);
			free(search->value);
			search->value = new_val;
			return (1);
		}
	}
	return (insertion_sort_new_node(ht, idx, key, value));
}

/**
 * shash_table_get - retrieves value associated with key
 * @ht: pointer to hash table
 * @key: key string
 * Return: value if found / NULL if not
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

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
/**
 * shash_table_print - print the hash table in a dict format
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	ul f_pt = 0;
	shash_node_t *hd;

	if (!ht || !ht->array || !ht->size)
		return;
	hd = ht->shead;
	printf("{");
	while (hd)
	{
		while (hd)
		{
			if (f_pt)
				printf(", ");
			printf("'%s': '%s'", hd->key, hd->value);
			if (!f_pt)
				f_pt = 1;
			hd = hd->snext;
		}
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print the hash table in a dict format in reverse
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	ul f_pt = 0;
	shash_node_t *hd;

	if (!ht || !ht->array || !ht->size)
		return;
	hd = ht->stail;
	printf("{");
	while (hd)
	{
		while (hd)
		{
			if (f_pt)
				printf(", ");
			printf("'%s': '%s'", hd->key, hd->value);
			if (!f_pt)
				f_pt = 1;
			hd = hd->sprev;
		}
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete the shash table using the sorted list
 * @ht: pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *hd, *prev;

	if (!ht || !ht->array || !ht->size)
		return;
	hd = ht->shead;
	while (hd)
	{
		prev = hd;
		hd = hd->snext;
		free(prev->key);
		free(prev->value);
		free(prev);
	}
	free(ht->array);
	free(ht);
}
