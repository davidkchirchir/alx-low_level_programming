#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i;

	/* Loop through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* If the character is a lowercase letter, convert it to uppercase */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
