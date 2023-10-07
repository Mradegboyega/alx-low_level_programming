# Project Name: C Programming Tasks

## Description
This project contains C programming tasks that cover various concepts, including memory allocation, string manipulation, and basic arithmetic operations.

## Tasks
1. **0-malloc_checked.c** - Allocating memory using `malloc`.
   - Prototype: `void *malloc_checked(unsigned int b);`
   - Returns a pointer to the allocated memory.
   - If `malloc` fails, the function causes normal process termination with a status value of 98.

2. **1-string_nconcat.c** - Concatenating two strings with a limit on the second string.
   - Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
   - Returns a pointer to a newly allocated space in memory.
   - If the function fails, it returns `NULL`.
   - Handles cases where `n` is greater than or equal to the length of `s2` and when `NULL` is passed as a string.

3. **2-calloc.c** - Allocating memory for an array using `calloc`.
   - Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
   - Returns a pointer to the allocated memory.
   - If `nmemb` or `size` is 0, or if `malloc` fails, it returns `NULL`.

4. **3-array_range.c** - Creating an array of integers with a specified range.
   - Prototype: `int *array_range(int min, int max);`
   - Returns a pointer to the newly created array.
   - Handles cases where `min` is greater than `max` or when `malloc` fails.

5. **100-realloc.c** - Reallocating memory using `realloc`.
   - Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
   - Returns a pointer to the newly allocated memory block.
   - Handles various cases, including when `ptr` is `NULL`, when sizes are equal, or when `new_size` is 0.

6. **101-mul.c** - A program that multiplies two positive numbers.
   - Usage: `mul num1 num2`
   - Validates input arguments, checks if they are positive numbers, and performs multiplication.
   - Handles error cases with proper error messages.

## Usage
To compile the individual task files, you can use the following commands:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-malloc_checked.c -o malloc_checked
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-string_nconcat.c -o string_nconcat
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-calloc.c -o calloc
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-array_range.c -o array_range
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-realloc.c -o realloc
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c -o mul


## You can then run the compiled programs like this:

./malloc_checked
./string_nconcat
./calloc
./array_range
./realloc
./mul num1 num2

