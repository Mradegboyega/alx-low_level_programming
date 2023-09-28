#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i; /* Declare the variable at the beginning of the function */

	/* Base case: If n is less than or equal to 1, it's not prime. */
	if (n <= 1)
		return (0);

	/* Check for divisibility by numbers from 2 to the square root of n. */
	i = 2; /* Initialize the variable here */

	while (i * i <= n)
	{
		if (n % i == 0)
			return (0); /* n is divisible by i, so it's not prime. */
		i++;
	}

	/* If no divisors were found, n is prime. */
	return (1);
}
