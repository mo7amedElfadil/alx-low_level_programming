#include "lists.h"

/**
 * listint_len - return number of elements in a listint_t list
 * @h: head of the linked list to be printed
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	if (!(h))
		return (0);
	return (1 + listint_len(h->next));
}
