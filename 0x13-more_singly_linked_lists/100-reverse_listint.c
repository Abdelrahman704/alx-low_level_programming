#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: address of first node pointer to
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nud = 0, *next = 0;

	if (!head || !*head)
		return (0);

	nud = *head;
	*head = 0;
	while (nud)
	{
		next = nud->next;
		nud->next = *head;
		*head = nud;
		nud = next;
	}
	return (*head);
}
