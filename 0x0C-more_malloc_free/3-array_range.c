#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array.
 * If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory using malloc */
	arr = malloc(sizeof(int) * size);

	/* Check if malloc fails */
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
