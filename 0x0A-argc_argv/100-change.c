#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints the minimum number of coins to make change
 *         for an amount of money
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: zero if succesful, otherwise, 1.
 */
int main(int argc, char *argv[])
{
	int cents, xv = 0, tens = 0, fives = 0, twos = 0, ones = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cents >= 25)
	{
		xv = cents / 25;
		cents = cents % 25;
	}
	if (cents >= 10)
	{
		tens = cents / 10;
		cents = cents % 10;
	}
	if (cents >= 5)
	{
		fives = cents / 5;
		cents = cents % 5;
	}
	if (cents >= 2)
	{
		twos = cents / 2;
		cents = cents % 2;
	}
	if (cents < 2 && cents > 0)
	{
		ones = cents;
	}
	coins = xv + tens + fives + twos + ones;
	printf("%d\n", coins);
	return (0);
}
