#include <stdio.h>

/**
 * main - print alphabet in lowercase followed by a new line.
 *
 * Return: Zero.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
