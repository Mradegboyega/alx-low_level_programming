#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function prints the second half of the null-terminated
 * string pointed to by @str, followed by a new line character.
 * If the number of characters is odd, it prints the last (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index for the second half */
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
