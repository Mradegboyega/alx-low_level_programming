#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 *
 * Return: void (no return value)
 */
void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i]; /* Sum of the main diagonal */
		diag2_sum += a[i * size + (size - 1 - i)]; /* Sum of the other diagonal */
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}
