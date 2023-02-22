#include <stdio.h>

/**
 *main - this prints prints the sum of multiples of 3
 *and 5 below 1024
 *Return : return 0
 */

int main(void)
{
	int sum_of_multiples = 0;
	int number;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum_of_multiples += number;
		}
		else
		{
			sum_of_multiples += 0;
		}
	}
	printf("%d\n", sum_of_multiples);
	return (0);
}
