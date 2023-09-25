#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: A pointer to a pointer to a char
 * @to: The char pointer to set *s to
 *
 * Return: void (no return value)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
