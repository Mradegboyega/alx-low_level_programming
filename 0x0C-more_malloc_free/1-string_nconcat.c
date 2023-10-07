#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concatenated;
	unsigned int len1 = 0, len2 = 0;

	/* Check if s1 is NULL; if so, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL; if so, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Use n if it's smaller than the length of s2; otherwise, use len2 */
	n = (n >= len2) ? len2 : n;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	/* Check if malloc fails */
	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy the first n bytes of s2 to the concatenated string */
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}
