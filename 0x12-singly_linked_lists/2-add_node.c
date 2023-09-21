#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: ptr to head ptr of the linked list
 * @str: string to be duplicated into the node's str member
 * Return:  address of a new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->len = _strlen(new->str);
	}
	else
		new->str = NULL;
	new->next = (*head);
	(*head) = new;
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
