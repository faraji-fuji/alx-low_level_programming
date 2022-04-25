#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
		return (newDog);
	}
	else
		free(newDog);
	return (NULL);
}
