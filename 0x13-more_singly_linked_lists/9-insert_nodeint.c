#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the idx position
 *						of a listint_t linked list.
 * @head: head of the linked list to be printed
 * @idx: index of list
 * @n: data to be assigned to node
 * Return: node at index or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (!head || !*head)
		return (NULL);
	if (idx - 1)
	{
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	}
	else
	{
		listint_t *new = NULL;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = (*head)->next;
		(*head)->next = new;

	}
	return ((*head)->next);


}
