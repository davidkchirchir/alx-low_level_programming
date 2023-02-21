#include "main.h"

/**
 * prints a-z lowercase alphabet
 *
 * Return: void (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);

	}
	_putchar('\n');
}
