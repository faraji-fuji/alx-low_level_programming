#include "main.h"

/**
 *  _print - a program that prints _putchar , followed by a new line.
 *
 * Return: Nothing.
 */

int _print(void)
{
	char *str;
	int i = 0;

	str = "_putchar";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
