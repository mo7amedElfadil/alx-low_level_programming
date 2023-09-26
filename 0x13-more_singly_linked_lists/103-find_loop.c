#include "lists.h"

/**
 * free_listint_safe - free all elements of a listint_t list safely
 * @h: head of the linked list to be printed
 * Return: size of list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rab = head, *tur = head;

	if (!(head))
		return (0);
	while (rab && tur && rab->next)
	{
		rab = rab->next->next;
		tur = tur->next;

		if(rab == tur)
		{
			printf("found match\n");
			printf("first match\ntur, %i\nrab, %i\n", tur->n, rab->n);
			return (rab);
		}
	}
	return (NULL);
}
