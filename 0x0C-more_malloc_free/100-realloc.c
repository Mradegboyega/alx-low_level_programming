#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 * If new_size > old_size, the added memory is not initialized.
 * If new_size == old_size, do not do anything and return ptr.
 * If ptr is NULL, it's equivalent to malloc(new_size).
 * If new_size is 0 and ptr is not NULL, it's equivalent to free(ptr) and returns NULL.
 * If malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;

	if (ptr != NULL)
	{
		unsigned char *old = ptr;
		unsigned char *new = new_ptr;
		unsigned int i;

		for (i = 0; i < min_size; i++)
		{
			new[i] = old[i];
		}
	}

	free(ptr);

	return (new_ptr);
}
