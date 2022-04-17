#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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
	int myInt, form = 0, flag;
	char myChar;
	float myFloat;
	char *myString;

	va_start(arglist, format);
	while (format[form])
	{
		flag = 0;
		switch (format[form])
		{
			case 'c':
				myChar = va_arg(arglist, int);
				printf("%c", myChar);
				break;
			case 'i':
				myInt = va_arg(arglist, int);
				printf("%d", myInt);
				break;
			case 'f':
				myFloat = va_arg(arglist, double);
				printf("%f", myFloat);
				break;
			case 's':
				myString = va_arg(arglist, char *);
				if (!myString)
					myString = "(nil)";
				printf("%s", myString);
				break;
			default:
				flag = 1;
				break;
		}
		form++;
		if (flag == 0 && format[-1] != format[form])
			printf(", ");
	}
	va_end(arglist);
	putchar('\n');
}
