#include "main.h"
#include <stdio.h>

/**
*print_times_table - prints the n times table
*prints nothing if n >15 or 15 < 0
*@n:integer
*return: returns nothing
*/

void print_times_table(int n)
{
	int number;
	int multiplieriplier;
	int result = number * multiplier;

	if (n <= 15 && n >= 0)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');
				if (result <= 99)
				{
					_putchar(' ');
				}
				else if (result <= 9)
				{
					_putchar(' ');
				}
				else if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
		}
	}
}
