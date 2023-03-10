#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: A negative integer if s1 is less than s2, 0 if they are equal, or
 *         a positive integer if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	/* Loop until a difference is found or one of the strings ends */
	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
		{
			return (0);
		}
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

