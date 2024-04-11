#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if the value is not present in the list or if
 *         list is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (!list)
        return (NULL);

    skiplist_t *express = list->express;
    skiplist_t *prev = list;

    while (express && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        prev = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, express ? express->index : prev->index);

    skiplist_t *current = prev;

    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    if (current && current->n == value)
        return (current);
    else
        return (NULL);
}
