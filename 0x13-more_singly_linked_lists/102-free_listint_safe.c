#include "lists.h"

/**
 * free_listint_safe - free all elements of a listint_t list safely
 * @h: head of the linked list to be printed
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = NULL;
	size_t i = 0;

	if (!(h) || !(*h))
		return (0);
	while (*h)
	{
		node = (*h)->next;
		if (*h - node > 0)
		{
			free(*h);
			*h = node;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			return (i);
		}
		}
	return (i);
}
