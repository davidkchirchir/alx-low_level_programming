#includer "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	
	/* Capitalize first letter of the string */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	/* Loop through each character in the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/* If the previous character is a separator and the current character is lowercase, capitalize it */
		if ((str[i - 1] == ' ' ||
					str[i - 1] == '\t' ||
					str[i - 1] == '\n' ||
					str[i - 1] == ',' ||
					str[i - 1] == ';' ||
					str[i - 1] == '.' ||
					str[i - 1] == '!' ||
					str[i - 1] == '?' ||
					str[i - 1] == '\"' ||
					str[i - 1] == '(' ||
					str[i - 1] == ')' ||
					str[i - 1] == '{' ||
					str[i - 1] == '}') &&
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
