#include "lists.h"
/**
 * reverse_listint - reverse a listint_t
 * @head: head of the linked list to be printed
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *temp = NULL;
/* , *temp = NULL */
	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	temp = reverse_listint(&(*head)->next);
	next = (*head)->next;
	next->next = (*head);
	(*head)->next = NULL;

	return (temp);


}


