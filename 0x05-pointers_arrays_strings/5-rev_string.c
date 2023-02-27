#include "main.h"

/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/

void rev_string(char *s)
{
	int i = 0;
	int length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
*_strlen - returns the length of a string
*@s: string whose length returned
*Return: returns string s length ;
*/

int _strlen(char *s)
{
	int count;
	int s_lenth = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		s_lenth++;
	}
	return (s_lenth);
}

/**
*swap_int - swaps two integers
*@a: first integer
*@b: second integer
*Return: nothing is returned
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

