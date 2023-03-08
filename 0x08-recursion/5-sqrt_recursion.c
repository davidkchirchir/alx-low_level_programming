#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be calculated
 *
 * Return: the natural square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int i = 1;

	while (i <= n / 2)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

