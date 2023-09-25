#include "lists.h"

/**
 * free_listint - frees a linked list list_t
 * @head: ptr to head ptr of the linked list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		(free_listint(head->next));
		free(head);
	}

}
