#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, space, hash;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			hash = i;
			space = size - i;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			while (hash > 0)
			{
				_putchar('#');
				hash--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
