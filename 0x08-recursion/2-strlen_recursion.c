#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: If the current character is the null terminator, the string is empty. */
	if (*s == '\0')
		return (0);

	/* Recursively call _strlen_recursion with the next character in the string. */
	return (1 + _strlen_recursion(s + 1));
}
