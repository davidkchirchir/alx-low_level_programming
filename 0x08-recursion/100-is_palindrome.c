#include "main.h"
#include <string.h>

/**
 * check_palindrome - recursive function to check if a string is a palindrome
 * @s: string to check
 * @i: starting index
 * @j: ending index
 *
 * Return: true if the string is a palindrome, false otherwise
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (check_palindrome(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: true if the string is a palindrome, false otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
