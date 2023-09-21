#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: If the result fits in the buffer, return a pointer to the result;
 *         otherwise, return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry = 0, sum, i, j;

	/* Calculate the lengths of n1 and n2 */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* Initialize indexes for n1, n2, and r */
	i = len1 - 1;
	j = len2 - 1;
	r[size_r - 1] = '\0'; /* Null-terminate the result string */

	/* Perform addition from right to left */
	for (size_r -= 2; i >= 0 || j >= 0 || carry; size_r--)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[size_r] = (sum % 10) + '0';

		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}

	/* Check if the result fits in the buffer */
	if (size_r < 0)
		return (0);

	/* If there's leading zeros, adjust the result pointer */
	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}

