#include "main.h"
/**
* leet - function that encode a string
*@str:string that will be encoded
*Return:returns encoded string
*/

char *leet(char *str)
{
	int i = 0;
	int j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
	}
	return (str);
}

