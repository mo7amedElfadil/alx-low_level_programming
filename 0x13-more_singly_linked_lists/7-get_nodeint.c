#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list to be printed
 * @index: index of list
 * Return: node at index or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index != 0)
		return (get_nodeint_at_index(head->next, index - 1));
	return (head);


}
