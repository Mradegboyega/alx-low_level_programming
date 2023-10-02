# Static Library Creation and Usage

This repository contains a set of C functions implemented in individual source files. I have created a static library and a simple C program to demonstrate how to use the library.

## Task 1: Creating a Static Library

### File Structure
- `0-isupper.c`: Implementation of `_isupper` function.
- `0-memset.c`: Implementation of `_memset` function.
- `0-strcat.c`: Implementation of `_strcat` function.
- `1-isdigit.c`: Implementation of `_isdigit` function.
- `1-memcpy.c`: Implementation of `_memcpy` function.
- `1-strncat.c`: Implementation of `_strncat` function.
- `100-atoi.c`: Implementation of `_atoi` function.
- `2-strchr.c`: Implementation of `_strchr` function.
- `2-strlen.c`: Implementation of `_strlen` function.
- `2-strncpy.c`: Implementation of `_strncpy` function.
- `3-islower.c`: Implementation of `_islower` function.
- `3-puts.c`: Implementation of `_puts` function.
- `3-strcmp.c`: Implementation of `_strcmp` function.
- `3-strspn.c`: Implementation of `_strspn` function.
- `4-isalpha.c`: Implementation of `_isalpha` function.
- `4-strpbrk.c`: Implementation of `_strpbrk` function.
- `5-strstr.c`: Implementation of `_strstr` function.
- `6-abs.c`: Implementation of `_abs` function.
- `_putchar.c`: Implementation of `_putchar` function.
- `main.c`: A sample C program that uses functions from the static library.
- `main.h`: Header file containing function prototypes.

### Compilation and Usage
- Run `./create_static_lib.sh` to create the static library `liball.a` from the `.c` files.
- The script compiles each `.c` file with specific flags, creates object files (`.o`), and then combines them into the library.
- After successful execution of the script, you can use `liball.a` in your C programs.

## Task 2: Using the Static Library

### Compilation
- To compile your C program that uses the static library, use the following command:
cc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -L. -lall -o my_program
