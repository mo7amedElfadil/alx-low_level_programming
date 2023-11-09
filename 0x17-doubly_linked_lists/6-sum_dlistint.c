#include "lists.h"

/**
 * sum_dlistint - return sum of all data (n) in a dlistint_t list
 * @head: head of the linked list to be printed
 * Return: sum of data or 0 if empty list
 */

int sum_dlistint(dlistint_t *head)
{
	if (!(head))
		return (0);
	return (head->n + sum_dlistint(head->next));
}
