#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list list_t
 * @head: head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		(free_dlistint(head->next));
		free(head);
	}

}
