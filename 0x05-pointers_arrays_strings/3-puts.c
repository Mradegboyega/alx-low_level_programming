#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function prints the characters of the null-terminated
 * string pointed to by @str to the standard output (stdout), followed by
 * a new line character.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
