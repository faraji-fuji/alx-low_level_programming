#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int myChar;

	myChar = '0';
	for (i = 0; i < 10; i++)
	{
		putchar(myChar);
		myChar++;
	}
	putchar('\n');
	return (0);
}
