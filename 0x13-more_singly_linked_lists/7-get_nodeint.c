#include "lists.h"

/**
 * get_nodeint_at_index
 * head: head of the linked list to be printed
 * index: index of list
 * Return: node at index
 * */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index != 0)
	{
		if (head->next)
			return (get_nodeint_at_index(head->next, index - 1));
		else
			return (NULL);
	}
	return (head);


}
