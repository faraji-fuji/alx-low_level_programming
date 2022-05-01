#include <stdio.h>

void fib()
{
	unsigned long int first = 1, second = 2, next = 0, c;

	printf("%ld, %ld",first, second);
	c = 0;
	while (c <= 50)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
		c++;
	}
	printf("\n");
}
int main(void)
{
	fib();
	return (0);
}


