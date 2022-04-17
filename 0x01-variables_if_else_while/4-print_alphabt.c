#include <stdio.h>

/**
 * main - print alphabet in lowercase except e and q followed by a new line.
 *
 * Return: Zero.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
