#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 *
 * @head: req linked list
 *
 * Return: address of node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer, *last;

	if (head == 0)
		return (0);
	for (last = head->next; last != 0; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (pointer = head; pointer != last; pointer = pointer->next)
			if (pointer == last->next)
				return (last->next);
	}

	return (0);
}
