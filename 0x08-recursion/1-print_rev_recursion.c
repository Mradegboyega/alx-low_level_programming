#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If the current character is the null terminator, return. */
	if (*s == '\0')
		return;

	/* Recursively call _print_rev_recursion with the next character in the string. */
	_print_rev_recursion(s + 1);

	/*
	 * After the recursive call returns (i.e., unwinding the call stack),
	 * print the current character. This effectively reverses the order.
	 */
	_putchar(*s);
}
