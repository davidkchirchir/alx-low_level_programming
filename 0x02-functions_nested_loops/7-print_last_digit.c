#include "main.h"

/**
 * print_last_digit - returns last digit of n
 *@n : is the integer whose last digit is returned
 *
 * Return: n or  -n
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n) % 10;

	return (last_digit);
}
