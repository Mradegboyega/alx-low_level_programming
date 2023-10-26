#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int bit, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bit = (sizeof(unsigned long int) * 8) - 1; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || bit == 0)
		{
			_putchar('0');
		}
	}
}
