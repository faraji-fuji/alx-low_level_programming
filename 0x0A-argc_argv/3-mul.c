#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: zero if succesful, otherwise, 1.
 */

int main(int argc, char *argv[])
{

	int a, b, result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
