#include <stdio.h>

/**
 * main - print a statement to the standard error
 *
 * Return: 1
 */

int main(void)
{
	fwrite("and that piece of art is useful\" - ", 35, 1, stderr);
	fwrite("Dora Korpar, 2015-10-19\n", 24, 1, stderr);
	return (1);
}
