#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tail = list;

	if (!list)
		return (NULL);

	while (tail->next && tail->express && tail->n < value)
	{
		list = tail;
		tail = tail->express;
		printf("Value checked at index [%lu] = [%i]\n", tail->index, tail->n);
	}
	if (!tail->express && tail->n < value)
	{
		list = tail;
		while (tail->next)
			tail = tail->next;
	}

	return (skip_list_helper(list, tail, value));
}

/**
 * skip_list_helper - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @tail: pointer to the tail of the express lane
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL
 */
skiplist_t *skip_list_helper(skiplist_t *list, skiplist_t *tail, int value)
{
	printf("Value found between indexes [%lu] and [%lu]\n",
			list->index, tail->index);
	while (list && list->n <= value)
	{
		printf("Value checked at index [%lu] = [%i]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
