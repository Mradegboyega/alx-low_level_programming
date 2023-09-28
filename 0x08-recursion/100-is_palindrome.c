#include "main.h"
#include <stddef.h> /* for size_t */

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
	size_t length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	size_t len = _strlen(s);
	size_t i = 0;

	while (i < len / 2)
	{
		if (s[i] != s[len - i - 1])
			return (0); /* Not a palindrome */

		i++;
	}

	return (1); /* It's a palindrome */
}
