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
	int j;
	char secondChar;

	myChar = 'a';
	secondChar = 'A';
	end = '\n';

	for (i = 0; i < 26; i++)
	{
	putchar(myChar);
	myChar += 1;
	}
	for (j = 0; j < 26; j++)
	{
	putchar(secondChar);
	secondChar += 1;
	}

	putchar(end);
	return (0);
}
