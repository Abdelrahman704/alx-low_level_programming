#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocates memory for an array
 * @list: the old list
 * @size: size of the new list
 * @new: new node to add
 *
 * Return: pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newli;
	size_t i;

	newli = malloc(size * sizeof(listint_t *));
	if (newli == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newli[i] = list[i];
	newli[i] = new;
	free(list);
	return (newli);
}

/**
 * print_listint_safe - Write a function that prints a
 * listint_t linked list.
 *
 * @head: pointer
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, t = 0;
	const listint_t **li = 0;

	while (head != 0)
	{
		for (k = 0; k < t; k++)
		{
			if (head == li[k])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(li);
				return (t);
			}
		}
		t++;
		li = _r(li, t, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(li);
	return (t);
}
