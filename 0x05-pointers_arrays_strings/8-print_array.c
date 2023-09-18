#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array.
 * @a: A pointer to the integer array.
 * @n: The number of elements to be printed.
 *
 * Description: This function prints the first n elements of the integer array
 * pointed to by @a, separated by a comma and space, followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
