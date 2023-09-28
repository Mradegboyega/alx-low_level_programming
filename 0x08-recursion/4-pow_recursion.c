#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	/* Base case: If y is negative, return -1 (error). */
	if (y < 0)
		return (-1);

	/* Base case: If y is 0, the result is 1. */
	if (y == 0)
		return (1);

	/* Recursive case: Calculate x^y by multiplying x by x^(y-1). */
	return (x * _pow_recursion(x, y - 1));
}
