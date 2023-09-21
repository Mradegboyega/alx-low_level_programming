#include "main.h" /* Include the main.h header file */

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest up to n characters */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Fill remaining characters in dest with null bytes if necessary */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
