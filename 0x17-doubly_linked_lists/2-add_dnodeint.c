#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: ptr to head ptr of the linked list
 * @n: integer value to be assigned to node
 * Return:  address of a new element or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
