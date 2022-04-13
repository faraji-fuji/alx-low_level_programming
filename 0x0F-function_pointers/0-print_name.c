#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  A function that prints a name.
 *
 * Return: Zero.
 */

void print_name(char *name, void (*f)(char *))
{
	void (*func_to_call) (char *name);

	func_to_call = f;
	func_to_call(name);
}
