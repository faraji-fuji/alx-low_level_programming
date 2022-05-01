#include "main.h"

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

/**
 * _pow_recursion - A function that returns the value of x
 *                  raised to the power of y.
 *
 * @x: Integer value.
 * @y: Integer value.
 *
 * Return: Value of x raised to y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
