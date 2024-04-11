#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value
 *         is not present in the array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    size_t jump = sqrt(size);
    size_t left = 0, right = 0;

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%zu] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }

    right = (right < size) ? right : size - 1;

    printf("Value found between indexes [%zu] and [%zu]\n", left, right);

    for (size_t i = left; i <= right; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
