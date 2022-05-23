#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: length of diagonal
 *
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
