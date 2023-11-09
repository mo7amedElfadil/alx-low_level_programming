#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list to be printed
 * @index: index of list
 * Return: node at index or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (!index)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));

}
