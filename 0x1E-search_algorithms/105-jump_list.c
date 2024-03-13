#include "search_algos.h"
/**
 * jump_list - function that searches for a value in a sorted list of integers
 *				using the Jump search algorithm with linked list
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *tail;
	size_t i;

	if (!list || !size)
		return (NULL);
	tail = list;
	while (tail->next && tail->n < value && tail->index < size - 1)
	{
		list = tail;
		for (i = 0; tail->next && i < jump; i++)
		{
			tail = tail->next;

		}
		printf("Value checked array[%lu] = [%i]\n", tail->index, tail->n);
	}
	return (jump_list_helper(list, tail, value));
}


/**
 * jump_list_helper - function that searches for a value in a sorted list of
 *						ints using the Jump search algorithm with linked list
 * @list: pointer to the head of the list to search in
 * @tail: pointer to the tail of the list to search in
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL
 */

listint_t *jump_list_helper(listint_t *list, listint_t *tail, int value)
{
	if (!list || !tail)
		return (NULL);
	printf("Value found between indexes [%lu] and [%lu]\n",
			list->index, tail->index);
	while (list && list->index <= tail->index)
	{
		printf("Value checked array[%lu] = [%i]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
