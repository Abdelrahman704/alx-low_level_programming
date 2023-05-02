#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @head: address of first node pointer
 * @idx: index to insert new_node
 * @n: n value of new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod, *node_new = malloc(sizeof(listint_t));
	unsigned int k = 0;

	if (!head || !node_new)
		return (0);

	node_new->n = n;
	node_new->next = 0;
	if (!idx)
	{
		node_new->next = *head;
		*head = node_new;
		return (node_new);
	}
	nod = *head;
	while (nod)
	{
		if (k == idx - 1)
		{
			node_new->next = nod->next;
			nod->next = node_new;
			return (node_new);
		}
		k++;
		nod = nod->next;
	}
	free(node_new);
	return (0);
}
