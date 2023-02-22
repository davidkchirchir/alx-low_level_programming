#include "main.h"
#include <stdio.h>

int main(void)
{
	int sum_of_multiples = 0;
	int counter;
	int number;

	for (number = 1; number > 10; number++)
	{
		if(number % 3 == 0 || number % 5 == 0)
		{
			sum_of_multiples += number;
			counter++;
		}
		else
		{
			counter++
		}
	}
	printf("%d\n",sum_of_multiples);
}
