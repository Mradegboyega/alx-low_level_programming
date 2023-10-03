#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, len = 0, total_len = 0;
	int newline_count = ac - 1;

	/* Check for invalid input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	total_len = len + newline_count + 1; /* +1 for the null terminator */

	/* Allocate memory for the concatenated string */
	result = malloc(total_len * sizeof(char));

	/* Check if memory allocation was successful */
	if (result == NULL)
		return (NULL);

	len = 0; /* Reset len for copying */

	/* Copy the arguments and add newline characters */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[len++] = av[i][j];
		}
		if (i < ac - 1)
			result[len++] = '\n'; /* Add newline except for the last argument */
	}

	result[len] = '\0'; /* Null-terminate the concatenated string */

	return (result);
}
