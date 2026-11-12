#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the dog structure to print.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
