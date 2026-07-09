#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog_t instance
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
