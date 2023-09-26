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
	listint_t *new = NULL;

	if (!head)
		return (NULL);
	if (!idx)
		return (add_nodeint(head, n));

	if (idx > 0)
	{
		if (!*head)
			return (NULL);
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	}
	return (new);
}
/**
 * add_nodeint - adds a node at the beginning of a listint_t list
 * @head: ptr to head ptr of the linked list
 * @n: integer value to be assigned to node
 * Return:  address of a new element or null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
