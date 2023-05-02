#include "lists.h"

/**
 * print_listint - a fun print  all the elements
 * of a listint_t list.
 *
 * @h: the first node pointer
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (number)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
