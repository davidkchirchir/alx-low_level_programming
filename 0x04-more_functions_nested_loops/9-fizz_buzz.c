#include <stdio.h>
/**
*main - program that prints either numberber
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/
int main(void)
{
	int number;

	while (number++ < 100)
		if ((number % 3 == 0) && (number % 5 == 0))
			printf("FizzBuzz ");
		else if ((number % 3) == 0)
			printf("Fizz ");
		else if ((number % 5) == 0)
		{
			if (number != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", number);
	printf("\n");
	return (0);
}
