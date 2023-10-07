#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

/* Function prototypes */
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_positive_number(char *str);
unsigned int multiply(unsigned int num1, unsigned int num2);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
