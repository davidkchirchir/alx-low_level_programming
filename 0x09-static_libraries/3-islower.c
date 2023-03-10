#include "main.h"

/**
 * _islower - check if letter is lowercase
 *@c : is a character and functions argument
 * Return: 1 (Success) or 2 (Failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
