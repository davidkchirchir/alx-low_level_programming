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
	if (str == NULL || strlen(str) == 0)
		return (NULL);

	/* count the number of words */
	int word_count = 0;
	int in_word = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			in_word = 0;
		} else if (!in_word) {
			in_word = 1;
			word_count++;
		}
	}

	/* allocate memory for the array of words */
	char **words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* split the string into words and store in the array */
	int word_index = 0;
	char *word_start = str;
	for (int i = 0; i <= strlen(str); i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			if (word_start != &str[i]) {
				int word_length = &str[i] - word_start;
				char *word = malloc((word_length + 1) * sizeof(char));
				if (word == NULL) {
					/* free memory and return NULL if allocation fails */
					for (int j = 0; j < word_index; j++) {
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(word, word_start, word_length);
				word[word_length] = '\0';
				words[word_index++] = word;
			}
			word_start = &str[i + 1];
		}
	}
	words[word_count] = NULL;
	return (words);
}

