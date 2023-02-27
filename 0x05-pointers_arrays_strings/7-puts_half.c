#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int start = (length % 2 == 0) ? (length / 2) : ((length - 1) / 2 + 1);

	for(i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
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

