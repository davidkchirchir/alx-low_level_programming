#include "main.h"

/**
*_strcat - concatenates  the string pointed to by @src to
* the end of the string pointed to by @dest
*@dest: String that will be appended
*@src: String to be concatenated upon
*
* Return: returns poiner to @dest
*/

char *_strcat(char *dest, char *src)
{
	// Find the end of the destination string

	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	// Append the source string to the destination string 

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	// Add a terminating null byte to the end of the concatenanted string 

	*dest_end = '\0';

	return (dest);
}
