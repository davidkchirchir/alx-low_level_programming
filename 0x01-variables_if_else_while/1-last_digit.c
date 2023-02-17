#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_dig = n % 10;

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %n is 0 and is 0\n", n);
	}
	else if (last_dig < 6 && last_dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	else
	{

	}
	return (0);
}
