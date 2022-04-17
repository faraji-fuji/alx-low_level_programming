#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Return: Zero.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(arglist, int));
			break;
		}
		if (separator)
			printf("%d%s", va_arg(arglist, int), separator);
		else
			printf("%d", va_arg(arglist, int));
	}
	va_end(arglist);
	putchar('\n');
}
