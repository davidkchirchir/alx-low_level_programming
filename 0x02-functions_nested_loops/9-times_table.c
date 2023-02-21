#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int number, multiplier, result;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			result = number * multiplier;
			if (result <= 9)
			{
				_putchar(' ');
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
