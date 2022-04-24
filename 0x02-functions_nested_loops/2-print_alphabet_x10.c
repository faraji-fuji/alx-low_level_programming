#include "main.h"

/**
 * print_alphabet -  prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;
	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		_putchar('\n');
	}
}
