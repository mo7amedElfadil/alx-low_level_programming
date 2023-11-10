#include "lists.h"

/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 * @h: pointer to the head pointer of the DLL.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: integer (data).
 *
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *he = *h, *new = NULL;

	if (!h || !(*h))
		return (NULL);
	while (he)
	{
		if (idx == i)
		{
			break;
		}
		if (he->next == NULL)
			break;
		i++;
		he = he->next;
	}

	if (idx > i + 1)
		return (NULL);
	if (he->prev == NULL)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == i + 1)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(*new));
		if (!new)
			return (NULL);
		new->n = n, new->next = he, new->prev = he->prev;

		he->prev->next = new, he->prev = new;
		he = new;
	}

	return (new);
}
