#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int 98;
	int fib1 = 1;
	int fib2 = 2;
	int fib3;

	printf("%d, %d", fib1, fib2);

	for (int i = 3; i <= n; i++)
	{
		fib3 = fib1 + fib2;
		printf(", %d", fib3);

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");
	return (0);
}
