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
	int myInt, f = 0;
	char myChar;
	float myFloat;
	char *myString;

	va_start(arglist, format);
	while (format[f])
	{
		switch (format[f])
		{
			case 'c':
				myChar = va_arg(arglist, int);
				switch (f)
				{
					case 0: printf("%c", myChar);
						break;
					default: printf(", %c", myChar);
				}
				break;
			case 'i':
				myInt = va_arg(arglist, int);
				switch (f)
				{
					case 0: printf("%d", myInt);
						break;
					default: printf(", %d", myInt);
				}
				break;
			case 'f':
				myFloat = va_arg(arglist, double);
				switch (f)
				{
					case 0: printf("%f", myFloat);
						break;
					default: printf(", %f", myFloat);
				}
				break;
			case 's':
				myString = va_arg(arglist, char *);
				if (!myString)
					myString = "(nil)";
				switch (f)
				{
					case 0: 
						printf("%s", myString);
						break;
					default: printf(", %s", myString);

				}
				break;
			default:
				break;
		}
		f++;
	}
	va_end(arglist);
	putchar('\n');
}
