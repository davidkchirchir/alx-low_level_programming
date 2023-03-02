#include "main.h"

/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	dest_len = 0;
	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}

	*(dest + dest_len + i) = '\0';
	return (dest);
}

