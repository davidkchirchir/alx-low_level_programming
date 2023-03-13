#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int length = 0;
	int position = 0;
	char *str;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	str = (char *) malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(str + position, av[i]);
		position += strlen(av[i]);
		str[position] = '\n';
		position++;
	}
	return (str);
}
