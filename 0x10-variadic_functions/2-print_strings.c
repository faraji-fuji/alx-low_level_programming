#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: zero.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *string;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arglist, char *);
		if (string == NULL)
			string = "(nil)";
		if (separator)
		{
			if (i == n - 1)
				printf("%s", string);
			else
				printf("%s%s ", string, separator);
		}
		else
			printf("%s", string);
	}
	va_end(arglist);
	putchar('\n');
}
