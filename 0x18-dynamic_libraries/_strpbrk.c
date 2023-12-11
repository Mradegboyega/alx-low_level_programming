#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The characters to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp_accept = accept;

		while (*temp_accept != '\0')
		{
			if (*s == *temp_accept)
				return (s);
			temp_accept++;
		}

		s++;
	}

	return (NULL);
}
