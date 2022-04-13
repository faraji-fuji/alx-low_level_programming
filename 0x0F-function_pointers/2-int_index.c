#include "stdlib.h"
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 *
 * @array: Array.
 * @size: Number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which the cmp function does
 *         not return 0, If no element matches, return -1,
 *         If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
				if (index != 0)
					return (index);
		}
	}
	return (-1);
}
