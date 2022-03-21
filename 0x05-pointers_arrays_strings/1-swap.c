#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: parameter a, a pointer to an integer
 * @b: parameter b, a pointer to an integer
 * Return: zero
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
