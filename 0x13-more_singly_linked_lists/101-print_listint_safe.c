#include "lists.h"

/**
 * print_listint_safe - print all elements of a listint_t list safely
 * @head: head of the linked list to be printed
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = NULL, *track = NULL;
	size_t i = 0, j;

	if (!(head))
		exit(98);

	node = head;
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
		node = node->next;
		track = head, j = 0;
		while (j < i)
		{
			if (node == track)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (i);
			}
			track = track->next;
			j++;
		}
	}
	return (i);
}
