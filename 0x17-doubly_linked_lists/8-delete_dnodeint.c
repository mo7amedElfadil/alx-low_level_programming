#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at the idx position
 *						of a listint_t linked list.
 * @head: head of the linked list to be printed
 * @index: index of list
 * Return: node at index or NULL if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);

	if (index)
	{
		if ((*head)->next)
			return (delete_dnodeint_at_index(&(*head)->next, index - 1));
		else
			return (-1);
	}
	else
	{
		dlistint_t *temp = *head;

		if (!temp->next && !temp->prev)
		{
			free(temp);
			*head = 0;
			return (1);
		}
		else if (!temp->prev)
		{
			(*head) = (*head)->next;
			(*head)->prev = 0;
		}
		else if (!temp->next)
		{
			(*head) = temp->prev;
			(*head)->next = 0;
		}
		else
		{
			(*head) = (*head)->next;
			(*head)->prev = temp->prev;
			temp->prev->next = (*head);
		}
		free(temp);
		return (1);
	}
}
