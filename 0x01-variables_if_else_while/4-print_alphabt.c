#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints the alphabet in lowercase
  *
  * Return: zero
  */

int main(void)
{
	char end;
	char myChar;
	int i;

	myChar = 'a';
	end = '\n';

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(myChar);
			myChar++;
		}
		else
		{
			myChar++;
		}
	}

	putchar(end);
	return (0);
}
