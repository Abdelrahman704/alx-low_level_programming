#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: the dog to print
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	    printf("Age: %f\n", d->age);
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
