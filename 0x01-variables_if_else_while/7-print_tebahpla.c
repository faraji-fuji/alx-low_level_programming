#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse followed by a new line.
 *
 * Return: Zero.
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
