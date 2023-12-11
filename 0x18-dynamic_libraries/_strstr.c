#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *substring = needle;

		while (*substring != '\0' && *haystack == *substring)
		{
			haystack++;
			substring++;
		}

		if (*substring == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
