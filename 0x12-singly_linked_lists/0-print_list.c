#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 * @h: head of the linked list to be printed
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	if (!(h))
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	return (1 + print_list(h->next));



}
