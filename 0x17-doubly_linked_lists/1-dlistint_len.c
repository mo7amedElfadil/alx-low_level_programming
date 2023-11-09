#include "lists.h"
/**
 * dlistint_len - finds the len doubly linked list
 * @h: head of doubly linked list
 * Return: len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + dlistint_len(h->next));
}
