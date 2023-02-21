#include "main.h"

/**
 * print_alphabet - prints a-z lowercase alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);

		}
		_putchar('\n');
}
