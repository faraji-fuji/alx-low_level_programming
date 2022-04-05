#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 *              integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **arr;

	if (width < 1 && height < 1)
	{
		return (NULL);
	}

	arr = malloc(width * height);
	arr[0][0] = 1;

	return (&arr[0]);
}
