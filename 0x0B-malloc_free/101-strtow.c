#include "main.h"
#include <stdlib.h>

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_separator(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * duplicate_word - Duplicates a word from a string.
 * @str: The input string.
 *
 * Return: A dynamically allocated copy of the word.
 */
char *duplicate_word(char *str)
{
	char *word;
	int len = 0;

	while (str[len] && !is_separator(str[len]))
	{
		len++;
	}

	word = malloc(len + 1);

	if (word)
	{
		int i;

		for (i = 0; i < len; i++)
		{
			word[i] = str[i];
		}

		word[len] = '\0';
	}

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings (words) or NULL if str is NULL or empty.
 */
char **strtow(char *str)
{
	int word_count = count_words(str);

	if (str == NULL || *str == '\0' || word_count == 0)
	{
		return (NULL);
	}

	char **words = malloc((word_count + 1) * sizeof(char *));

	if (words)
	{
		int i = 0;
		int in_word = 0;

		while (*str)
		{
			if (is_separator(*str))
			{
				in_word = 0;
			}
			else if (!in_word)
			{
				in_word = 1;
				words[i++] = duplicate_word(str);
			}

			str++;
		}

		words[i] = NULL;
	}

	return (words);
}
