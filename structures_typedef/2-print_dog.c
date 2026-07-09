#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Nom du toutou : %s\n", d->name);
	}

	printf("Age du toutou : %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Nom du proprio : %s\n", d->owner);
	}
}
