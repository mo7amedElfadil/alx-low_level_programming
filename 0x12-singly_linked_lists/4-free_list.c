#include "lists.h"

/**
 * free_list - frees a linked list list_t
 * @head: ptr to head ptr of the linked list
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		(free_list(head->next));
		if (head->str)
			free(head->str);
		free(head);
	}

}
