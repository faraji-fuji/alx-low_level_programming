#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 *
 * @d: pointer to variable of type dog_t.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	free(d);
}
