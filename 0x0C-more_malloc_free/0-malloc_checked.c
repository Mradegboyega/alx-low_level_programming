#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate memory using malloc */
	ptr = malloc(b);

	/* Check if malloc failed */
	if (ptr == NULL)
	{
		/* Terminate the program with status 98 */
		exit(98);
	}

	return (ptr);
}
