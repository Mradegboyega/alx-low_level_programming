#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: A pointer to a string.
 *
 * Description: This function calculates the length of a null-terminated string
 * pointed to by @s.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
