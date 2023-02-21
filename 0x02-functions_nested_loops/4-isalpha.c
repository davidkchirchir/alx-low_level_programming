#include "main.h"

/**
 * _isalpha - check if letter is lowercase or uppercase
 *@c : is a character and functions argument
 * Return: 1 for uppercase or 0 for lowercase
 */
int _isalphai(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
