#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 *                  on each element of an array.
 *
 * @array: Array.
 * @size: Size of the array.
 * @action: A pointer to the function you need to use.
 *
 * Return: Zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
