#include "main.h" /* Include the main.h header file */

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string up to n bytes or until null terminator */
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add a terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
