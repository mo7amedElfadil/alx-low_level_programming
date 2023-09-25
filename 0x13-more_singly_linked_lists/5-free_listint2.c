#include "lists.h"

/**
 * free_listint2 - frees a linked list list_t
 * @head: ptr to head ptr of the linked list
 */
void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		(free_listint2(&(*head)->next));
		free((*head));
	}
	*head = NULL;

}
