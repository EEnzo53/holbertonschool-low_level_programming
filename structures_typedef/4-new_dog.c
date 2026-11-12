#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - computes the length of a string
 * @s: the string
 *
 * Return: the length, without the terminating null byte
 */
static int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - returns a malloc'd copy of a string
 * @s: the string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
static char *_strdup(char *s)
{
	char *copy;
	int i, len;

	len = _strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - creates a new dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 *
 * Return: a pointer to the new dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
