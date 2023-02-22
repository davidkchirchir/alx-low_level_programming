#include "main.h"
#include <stdio.h>

int main(void)
{
	int sum_of_multiples = 0;
	int number;

	for (number = 1; number > 10; number++)
	{
		if(number % 3 == 0 || number % 5 == 0)
		{
			sum_of_multiples += number;
			number++;
		}
		else
		{
			number++;
		}
	}
	printf("%d\n",sum_of_multiples);
}
