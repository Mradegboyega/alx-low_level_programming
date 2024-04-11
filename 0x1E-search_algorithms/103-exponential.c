#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * min - Returns the minimum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The minimum of the two integers.
 */
size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}

/**
 * binary_search_range - Searches for a value in a range of an array
 *                       using the Binary search algorithm.
 * @array: A pointer to the first element of the array.
 * @low: The starting index of the range.
 * @high: The ending index of the range.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value
 *         is not present in the array within the given range.
 */
int binary_search_range(int *array, size_t low, size_t high, int value)
{
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;
        printf("Value checked array[%zu] = [%d]\n", mid, array[mid]);

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value
 *         is not present in the array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return (-1);

    size_t bound = 1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%zu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    size_t low = bound / 2;
    size_t high = min(bound, size - 1);

    printf("Value found between indexes [%zu] and [%zu]\n", low, high);

    return binary_search_range(array, low, high, value);
}

