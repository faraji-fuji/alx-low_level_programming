#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  a program that adds positive numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: zero if succesful, otherwise, 1.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) && atoi(argv[i]) >= 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);

}
