#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	int i, j;

	newDog = malloc(sizeof(dog_t));
	if (newDog)
	{
		newDog->name = malloc(sizeof(name));
		if (newDog->name)
		{
			i = 0;
			while (name[i])
			{
				newDog->name[i] = name[i];
				i++;
			}

		}
		else
			free(newDog);
		newDog->age = age;
		newDog->owner = malloc(sizeof(owner));
		if (newDog->owner)
		{
			j = 0;
			while (owner[j])
			{
				newDog->owner[j] = owner[j];
				j++;
			}
		}
		else
			free(newDog->owner);
		return (newDog);
	}
	else
		free(newDog);
	return (NULL);
}
