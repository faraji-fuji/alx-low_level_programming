#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 * @n: legth of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
