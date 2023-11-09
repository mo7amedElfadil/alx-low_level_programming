#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: ptr to head ptr of the linked list
 * @n: integer to be assigned to the new node
 * Return: address of a new element or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if ((*head))
		return (add_dnodeint_end(&(*head)->next, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	new->prev = *head;
	if (*head)
		(*head)->next = new;
	*head = new;
	return (new);
}