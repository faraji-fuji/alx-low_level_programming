#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a string containing 0s and 1s.
 *
 * Return: Decimal, or 0 if b is null, b contains non 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int l, i;
	unsigned int sum = 0, val = 0;

	if (!b)
		return (0);
	l = 0;
	while (b[l])
		l++;
	i = 0;
	while (b[i])
	{
		l--;
		val = (b[i] - '0');
		if (val == 0 || val == 1)
		{
			sum += (val * _pow_recursion(2, l));
			i++;
		}
		else
			return (0);
	}
	return (sum);
}
