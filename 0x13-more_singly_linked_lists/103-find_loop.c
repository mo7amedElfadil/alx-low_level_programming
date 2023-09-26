#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: head of the linked list to be printed
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

		if (rab == tur)
		{
			return (rab);
		}
	}
	return (NULL);
}
