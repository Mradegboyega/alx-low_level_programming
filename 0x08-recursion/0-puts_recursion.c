#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	/*
	 * Base case: If the current character is the null terminator,
	 * print a newline and return.
	 */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/*
	 * Print the current character and make a recursive call to print
	 * the rest of the string.
	 */
	_putchar(*s);
	_puts_recursion(s + 1);
}
