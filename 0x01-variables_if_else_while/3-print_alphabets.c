#include <stdio.h>

/**
 * main - Print alphabet in lowercase followed by uppercase the new line.
 *
 * Return: Zero.
 */

int main(void)
{
	char alpha, ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
		putchar(ALPHA);
	putchar('\n');
	return (0);
}
