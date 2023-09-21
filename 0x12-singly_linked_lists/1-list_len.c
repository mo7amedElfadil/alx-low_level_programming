#include "lists.h"

/**
 * list_len - return number of elements in a list_t list
 * @h: head of the linked list to be printed
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	if (!(h))
		return (0);

	return (1 + list_len(h->next));



}
