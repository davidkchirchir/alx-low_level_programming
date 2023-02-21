#include "main.h"

/**
 * print_last_digit - returns last digit of n
 *@n : is the integer whose last digit is returned
 *
 * Return: n or  -n
 */
int print_last_digit(int n)
{
	int abs_n = -n < 0 ? -n : n;
	int last_digit = abs_n % 10;

	_putchar (last_digit + '0');
	return (last_digit);
}
