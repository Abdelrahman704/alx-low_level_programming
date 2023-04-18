#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for
 * an array, using malloc.
 *
 * @size: byte size
 * @nmemb: number of elements
 *
 * Return: pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	m = malloc(nmemb * size);
	if (!nmemb || !size)
		return (NULL);
	if (!m)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		m[nmemb] = 0;
	return (m);
}
