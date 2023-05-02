#include "lists.h"

/**
 * add_nodeint - Write a function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: first node pointer
 * @n: value for new node
 *
 * Return: new node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));

	if (!head || !node_new)
		return (NULL);

	node_new->next = NULL;
	node_new->n = n;
	if (*head)
		node_new->next = *head;
	*head = node_new;
	return (node_new);
}
