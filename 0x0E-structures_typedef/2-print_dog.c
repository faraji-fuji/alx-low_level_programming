#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to struct variable.
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	name = malloc(sizeof(d->name));
	owner = malloc(sizeof(d->owner));

	if (d)
	{
		if (d->name)
		{
			*name = d->name;
			printf("Name: %s\n", d->name);
		}
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
			*owner = d->owner;
		}
		else
			printf("Owner: (nil)\n");
	}
}
