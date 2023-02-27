#include "main.h"

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
