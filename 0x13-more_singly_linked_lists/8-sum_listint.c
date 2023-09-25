#include "lists.h"

/**
 * sum_listint - return sum of all data (n) in a listint_t list
 * @head: head of the linked list to be printed
 * Return: sum of data or 0 if empty list
 */

int sum_listint(listint_t *head)
{
	if (!(head))
		return (0);
	return (head->n + sum_listint(head->next));
}
