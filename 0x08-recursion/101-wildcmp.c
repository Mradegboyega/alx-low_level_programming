#include "main.h"

/**
 * wildcmp - Compares two strings with special character *.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which may contain * as a wildcard.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical. */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 has a wildcard *, recursively compare different possibilities. */
	if (*s2 == '*')
	{
		/* Move s2 to the next character after * to consider it as empty. */
		s2++;

		/* Recursively try matching s1 and s2 with * as an empty string. */
		if (wildcmp(s1, s2))
			return (1);

		/* Recursively try matching s1 with the next character of s2. */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	/* If characters match or s2 has a wildcard *, move both pointers. */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* Characters don't match. */
}
