#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len = 0, i;

	/* Check for NULL pointer */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc((len + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (duplicate == NULL)
		return (NULL);

	/* Copy the input string to the duplicate */
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
