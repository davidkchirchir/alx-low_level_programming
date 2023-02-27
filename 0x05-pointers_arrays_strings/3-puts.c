#include "main.h"

/**
*_puts - prints a string
*@str: the string to be printed
*
*Returns : nothing , prints the number or characters
*/

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}

	_putchar('\n');
}
