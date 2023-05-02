#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finding loop in the linked list
 *
 * @head: the linked list
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
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

/**
 * free_listint_safe - a function that frees a listint_t list
 *
 * @h: head of list
 *
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_nod;
	size_t lin;
	int a_loop = 1;

	if (h == 0 || *h == 0)
		return (0);

	loop_nod = find_listint_loop_fl(*h);
	for (lin = 0; (*h != loop_nod || a_loop) && *h != 0; *h = next)
	{
		lin++;
		next = (*h)->next;
		if (*h == loop_nod && a_loop)
		{
			if (loop_nod == loop_nod->next)
			{
				free(*h);
				break;
			}
			lin++;
			next = next->next;
			free((*h)->next);
			a_loop = 0;
		}
		free(*h);
	}
	*h = 0;
	return (lin);
}
