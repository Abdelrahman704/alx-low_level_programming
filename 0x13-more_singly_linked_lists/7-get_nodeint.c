#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth
 * node of a listint_t linked list.
 * @head: pointer to first node
 * @index: the requre index of node
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int k;

	for (nod = head, k = 0; nod && k < index; nod = nod->next, k++)
		;
	return (nod);
}
