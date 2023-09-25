#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at the idx position
 *						of a listint_t linked list.
 * @head: head of the linked list to be printed
 * @index: index of list
 * Return: node at index or NULL if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);
	if (index)
	{
		return (delete_nodeint_at_index(&(*head)->next, index - 1));
	}
	else
	{
		listint_t *temp = (*head);

		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
}
