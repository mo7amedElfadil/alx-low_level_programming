#include "lists.h"

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

