#include <stdio.h>

/**
 * main - print single digit numbers of base 10.
 *
 * Return: Zero.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48);
	putchar('\n');
	return (0);
}
