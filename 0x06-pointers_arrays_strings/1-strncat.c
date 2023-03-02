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
	char *dest_end = dest;

	/*Find the end of destination string */
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	/*Append the source string to the destination string */
	while (*src != '\0' && (*src && *dest_end) < n)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	/*Add terminating null byte to the end to the concatenated string */
	*dest_end = '\0';
	return (dest);
}
