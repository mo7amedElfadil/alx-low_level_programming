#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: ptr to head ptr of the linked list
 * Return: the head node’s data (n).
 */


int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *temp = (*head);

	(*head) = (*head)->next;
	free(temp);
	return (n);
}
