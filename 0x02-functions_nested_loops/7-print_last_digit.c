#include "main.h"

/**
 * print_last_digit - returns last digit of n
 *@n : is the integer whose last digit is returned
 *
 * Return: n or  -n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
