#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: the address of first node pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nod, *te;

	if (!head)
		return;

	nod = *head;
	while (nod)
	{
		te = nod;
		nod = nod->next;
		free(te);
	}
	*head = 0;
}
