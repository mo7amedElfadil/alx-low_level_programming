#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: ptr to head ptr of the linked list
 * @n: integer to be assigned to the new node
 * Return: address of a new element or null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head)
	{
		(*head)->next = (add_nodeint_end(&(*head)->next, n));
	}
	else
	{
		listint_t *new = NULL;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		(*head) = new;
	}
	return (*head);
}
