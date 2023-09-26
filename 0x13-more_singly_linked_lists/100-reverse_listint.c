#include "lists.h"
/**
 * reverse_listint - reverse a listint_t
 * @head: head of the linked list to be printed
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	*head = reverse(head);
	return (*head);
}
/**
 * reverse - reverse a listint_t helper function
 * @head: head of the linked list to be printed
 * Return: pointer to first node
 */
listint_t *reverse(listint_t **head)
{
	listint_t *next = NULL;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	next = reverse(&(*head)->next);
	(*head)->next->next = (*head);
	(*head)->next = NULL;
	return (next);
}




