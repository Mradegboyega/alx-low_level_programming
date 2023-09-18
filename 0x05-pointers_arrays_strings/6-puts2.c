#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function prints every other character of the null-terminated
 * string pointed to by @str, starting with the first character, followed by
 * a new line character.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2; /* Increment the index by 2 to skip every other character */
	}

	_putchar('\n');
}
