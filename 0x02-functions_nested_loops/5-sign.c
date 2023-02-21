#include "main.h"

/**
 * print_sign - check if letter is lowercase or uppercase
 *@n : is a character and functions argument
 * Return: 1 for n > 0 or 0 for n==0 and -1 for n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (-1);
}
