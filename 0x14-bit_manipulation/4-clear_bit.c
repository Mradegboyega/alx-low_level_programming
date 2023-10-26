#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the unsigned long integer
 * @index: The index of the bit to clear (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8)) /* Check if index is out of range */
		return (-1);

	*n = *n & ~(1ul << index); /* Clear the bit at the specified index */

	return (1);
}
