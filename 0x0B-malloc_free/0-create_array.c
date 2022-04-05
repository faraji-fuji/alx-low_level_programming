#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes
 *                it with a specific char.
 *
 * @size: the size of the array.
 * @c: the character to initialize with.
 *
 * Return: NULL if size == 0. Returns a pointer to the array, or NULL if it
 *         fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(char) * size);
	arr[0] = c;

	return (&arr[0]);
}
