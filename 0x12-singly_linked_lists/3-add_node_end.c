#include "lists.h"

/**
 * add_node_end - adds a node at the beginning of a list_t list
 * @head: ptr to head ptr of the linked list
 * @str: string to be duplicated into the node's str member
 * Return:  address of a new element or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	if (*head == NULL)
	{
		list_t *new;

		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);


		new->str = strdup(str);
		new->len = _strlen(new->str);
		new->next = NULL;
		(*head) = new;
	}
	else
	{
		(*head)->next = (add_node_end(&(*head)->next, str));
	}


	return (*head);



}

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a string.
 * Return: length of string s.
 */
int _strlen(char *s)
{
	int  l = 0;

	while (s[l])
		l++;
	return (l);
}
