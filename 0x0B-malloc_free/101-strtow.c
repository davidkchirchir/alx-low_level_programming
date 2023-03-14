#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char *word_start = str;
	int word_index = 0;
	int word_count = 0;
	int in_word = 0;
	int i;
	char **word;
	char *word;
	int word_length;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
	}
	words = malloc((word_count + 1) *sizeof(char*));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	word_start = str;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (word_start != &str[i])
			{
				word_length = &str[i] - word_start;
				word = malloc((word_length+1) * sizeof(char));
				if (word == NULL)
				{
					for (int j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(word, word_start, word_length);
				word[word_length] = '\0';
				words[word_index++] = word;
			}
			word_start = &str[i+1];
		}
	}
	words[word_count] = NULL;
	return (words);
}

