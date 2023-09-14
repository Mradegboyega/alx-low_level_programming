#include <stdio.h>
#include <math.h>

/**
 * is_prime - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime(long n)
{
	long i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;
	long i = 3;

	if (n % 2 == 0)
	{
		max_prime = 2;
		while (n % 2 == 0)
			n /= 2;
	}

	while (i <= (long)sqrt(n))
	{
		if (n % i == 0)
		{
			max_prime = i;
			while (n % i == 0)
				n /= i;
		}
		i += 2;
	}

	if (n > 2)
		max_prime = n;

	return (max_prime);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long max_prime = largest_prime_factor(n);

	printf("%ld\n", max_prime);
	return (0);
}

