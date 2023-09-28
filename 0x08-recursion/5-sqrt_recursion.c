#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to calculate the square root for.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_helper(int n, int i)
{
	/* Base case: If n is negative or less than 0, there's no natural square root. */
	if (n < 0)
		return (-1);

	/* Base case: If i^2 is equal to n, we found the natural square root. */
	if (i * i == n)
		return (i);

	/* Base case: If i^2 exceeds n, there's no natural square root. */
	if (i * i > n)
		return (-1);

	/* Recursive case: Increment i and continue searching. */
	return (_sqrt_helper(n, i + 1));
}
