#include "main.h"

/**
 * _islower - check if letter is lowercase
 *
 * Return: 1 (Success)
 * Return: 0 (Failure)
 */
int _islower (int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
