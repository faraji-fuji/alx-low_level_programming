#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all -  prints anything.
 *
 * @format: is a list of types of arguments passed to the function.
 *
 * Return: Zero.
 */

void print_all(const char * const format, ...)
{
	va_list arglist;
	int f = 0, flag;
	char *myString;

	while (!format)
	{
		putchar('\n');
		exit(0);
	}
	va_start(arglist, format);
	while (format[f])
	{
		if (f > 0 && flag != 1)
			printf(", ");
		flag = 0;
		switch (format[f])
		{
			case 'c':
				printf("%c", va_arg(arglist, int));
				break;
			case 'i':
				printf("%d", va_arg(arglist, int));
				break;
			case 'f':
				printf("%f", va_arg(arglist, double));
				break;
			case 's':
				myString = va_arg(arglist, char *);
				if (!myString)
					myString = "(nil)";
				printf("%s", myString);
				break;
			default:
				flag = 1;
		}
		f++;
	}
	va_end(arglist);
	putchar('\n');
}


