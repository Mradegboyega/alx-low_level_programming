#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, the character written. On error, EOF.
 */
int _putchar(char c)
{
	/* Use tabs for indentation */
	return write(1, &c, 1);
}
