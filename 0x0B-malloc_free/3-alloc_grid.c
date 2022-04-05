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

	if (width < 1 && height < 1)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[1] = malloc(width * sizeof(int));
	}


	free(arr);
	return (&arr[0]);
}
