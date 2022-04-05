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
	int **arr, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc((width * height) * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < (width * height); i++)
		arr[i] = 0;

	return (&arr[0]);
}
