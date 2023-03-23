#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a series of numbers, separated by a given separator.
 * @separator: The separator string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable arguments to be printed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++) {
		num = va_arg(args, int);
		printf("%d", num);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

