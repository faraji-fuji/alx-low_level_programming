#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 *
 * @n: number of parameters.
 *
 * Return: Zero, If n == 0, return 0..
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);
	va_end(arglist);
	return (sum);
}
