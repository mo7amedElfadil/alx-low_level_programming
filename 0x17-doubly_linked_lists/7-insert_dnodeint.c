#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at the idx position
 * of a dlistint_t linked list.
 * @h: head of the linked list to be printed
 * @idx: index of list
 * @n: data to be assigned to node
 * Return: node at index or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;

	if (!h)
		return (NULL);
	if (!idx)
	{
		if (!*h || !(*h)->prev)
			return (add_dnodeint(h, n));
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (0);
		new->n = n;
		new->prev = (*h)->prev;
		new->next = (*h);
		(*h)->prev = new;
		*h = new;
	}
	else if (idx > 0)
	{
		if (!*h)
			return (NULL);
		else if (idx == 1 && !(*h)->next)
			return (add_dnodeint_end(h, n));
		return (insert_dnodeint_at_index(&(*h)->next, idx - 1, n));
	}
	return (new);
}

