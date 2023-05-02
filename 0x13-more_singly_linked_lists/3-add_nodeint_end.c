#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: first node pointer
 * @n: new node value
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));
	listint_t *nod;

	if (!head || !node_new)
		return (NULL);

	node_new->next = NULL;
	node_new->n = n;
	if (!*head)
		*head = node_new;
	else
	{
		nod = *head;
		while (nod->next)
			nod = nod->next;
		nod->next = node_new;
	}
	return (node_new);
}
