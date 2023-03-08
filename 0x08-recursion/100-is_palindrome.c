#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int i;
	int j = strlen(s) - 1;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == s[j])
		{
			j--;
			continue;
		}
		else
		{
			return (0);
		}
		break;
	}
	return (1);
}
