#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Copier le nom */
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';

	/* Copier l'âge */
	dog->age = age;

	/* Copier le propriétaire */
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';

	return (dog);
}
