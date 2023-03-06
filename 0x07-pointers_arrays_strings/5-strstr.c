#include "main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string
 *
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located
 * substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);

	if (needle_len > haystack_len)
	{
		return (NULL);
	}

	for (int i = 0; i <= haystack_len - needle_len; i++)
	{
		if (strncmp(&haystack[i], needle, needle_len) == 0)
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}

