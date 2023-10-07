#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated and zero-initialized memory.
 * If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total_size;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size required for allocation */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);

	/* Check if malloc fails */
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
