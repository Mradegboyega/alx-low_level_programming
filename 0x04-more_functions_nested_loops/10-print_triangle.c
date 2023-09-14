#include "main.h"

/**
 * print_triangle - Print a triangle of a given size using the '#' character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row, space, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (space = size - 1 - row; space > 0; space--)
		{
			_putchar(' ');
		}

		for (col = 0; col <= row; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

