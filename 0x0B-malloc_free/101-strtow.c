#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
char *copy_word(char *str);

/**
 * strtow - splits a string into words.
 * @str: the input string.
 *
 * Return: pointer to an array of strings (words), or NULL if it fails.
 */

char **strtow(char *str)
{
char **words;
int word_count, j, i = 0;
int all_spaces = 1;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

while (*str)
{
if (*str != ' ')
{
all_spaces = 0;
break;
}
str++;
}
if (all_spaces)
{
return (NULL);
}

	word_count = count_words(str);

	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		while (*str && *str == ' ')
		{
			str++;
		}

		if (*str)
		{
			words[i] = copy_word(str);

			if (words[i] == NULL)

			{
				for (j = 0; j < i; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}

		i++;
		while (*str && *str != ' ')
		{
			str++;
		}
		}
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string to count words in.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
int count = 0;
int is_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
	str++;
	}

	if (count == 1 && is_word == 0)
	{
		return (0);
	}

	return (count);
}

/**
 * copy_word - Copies a word from a source string to a new string.
 * @str: The source string containing the word to be copied.
 *
 * Return: A dynamically allocated string containing the copied word,
 * or NULL if it fails.
 */

char *copy_word(char *str)
{
char *word;
int len = 0;
int i = 0;

	while (str[len] && str[len] != ' ')
	{
		len++;
	}

	word = (char *)malloc(sizeof(char) * (len + 1));

	if (word == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		word[i] = str[i];
	}
	word[i] = '\0';

	return (word);
}
