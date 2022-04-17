#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Zero.
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
		putchar(i + 48);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
