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
	char *dest_end = dest;

	/*Find the end of destination string */
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	/*Append the source string to the destination string */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	/*Add terminating null byte to the end to the concatenated string */
	*dest_end = '\0';
	return (dest);
}
