#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h> /* Include standard library for size_t definition */

/* Function Prototypes */
int linear_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_range(int *array, size_t low, size_t high, int value);
int exponential_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int advanced_binary_recursive(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif /* SEARCH_ALGOS_H */
