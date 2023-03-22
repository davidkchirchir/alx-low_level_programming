#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func_ptr = get_op_func(operator);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
