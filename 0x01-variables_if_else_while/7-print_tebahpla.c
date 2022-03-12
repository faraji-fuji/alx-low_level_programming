#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: zero
 */

int main(void)
{
	char end;
	char myChar;
	int i;

	myChar = 'z';
	end = '\n';

	for (i = 0; i < 26; i++)
	{
		putchar(myChar);
		myChar -= 1;
	}

	putchar(end);
	return (0);
}
