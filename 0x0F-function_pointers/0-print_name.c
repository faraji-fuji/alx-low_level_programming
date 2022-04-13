#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  A function that prints a name.
 *
 * @name: Name to print.
 * @f: Pointer to function.
 *
 * Return: Zero.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
