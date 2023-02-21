#include <stdio.h>

/**
 * _abs - return absolute figure of n
 *@n : is the integer whose absolute in returned
 *
 * Return: n or  -n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
