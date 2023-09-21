#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: ptr to head ptr of the linked list
 * @str: string to be duplicated into the node's str member
 * Return:  address of a new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (*head == NULL)
		*head = new;
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = (*head);
	return (*head);
}


