#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: Integer.
 *
 * Return: Absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
