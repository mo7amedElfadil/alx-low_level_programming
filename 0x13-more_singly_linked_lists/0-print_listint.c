#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h: head of the linked list to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (!(h))
		return (0);

	printf("%i\n", h->n);
	return (1 + print_listint(h->next));
}
