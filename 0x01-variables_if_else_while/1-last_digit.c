#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Print last digit of the random integer n; with different conditions
 *
 * Return: zero
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	last = (n % 10);

	if (last > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last);
		printf(" and is greater than 5\n");
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", last);
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d", n);
		printf(" is %d", last);
		printf(" and is 0\n");
	}
	return (0);
}
