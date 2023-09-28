#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n, or -1 if n is negative (error).
 */
int factorial(int n)
{
	/* Base case: If n is negative, return -1 (error). */
	if (n < 0)
		return (-1);

	/* Base case: If n is 0, the factorial is 1. */
	if (n == 0)
		return (1);

	/* Recursive case: Calculate the factorial of n by multiplying n by factorial(n-1). */
	return (n * factorial(n - 1));
}
