#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: address of first node pointer
 * @index: index delete
 *
 * Return: 1 to success, -1 to not success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nud, *prev;
	unsigned int k = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		nud = *head;
		*head = (*head)->next;
		free(nud);
		return (1);
	}
	nud = *head;
	while (nud)
	{
		if (k == index)
		{
			prev->next = nud->next;
			free(nud);
			return (1);
		}
		k++;
		prev = nud;
		nud = nud->next;
	}
	return (-1);
}
