#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The unsigned long integer
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8)) /* Check if index is out of range */
		return (-1);

	return ((int)((n >> index) & 1));
}
