#include "lists.h"
/**
 * reverse_listint - reverse a listint_t
 * @head: head of the linked list to be printed
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;

	if (!head || !*head || !(*head)->next)
	{
		printf("nULLLL\n");
		return (*head);
	}

		next = reverse_listint(&(*head)->next);

		(*head)->next->next = (*head);
		/* next->next = *head; */
		(*head)->next = NULL;
		return (next);


}


