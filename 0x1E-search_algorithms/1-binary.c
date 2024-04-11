#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value
 *         is not present in the array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size, mid;

    if (!array)
        return (-1);

    while (left < right)
    {
        print_array(array + left, right - left);
        mid = left + (right - left) / 2;

        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid;
        else
            return (mid);
    }

    return (-1);
}
