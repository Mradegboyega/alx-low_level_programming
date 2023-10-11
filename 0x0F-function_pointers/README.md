# Function Pointers in C

In this repository, we've implemented several tasks related to function pointers in C. Each task has its own source code and header files. Below is a brief description of each task and its files.

## Task 0 - Function Pointer for Printing a Name

### Files:
- `0-main.c`: Main program to test the function pointers.
- `0-print_name.c`: Contains a function `print_name_reverse` that prints a name in reverse order.
- `function_pointers.h`: Header file with function prototypes.

**Instructions:**
- Implement a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *))`.

## Task 1 - Function Pointer for Array Iteration

### Files:
- `1-main.c`: Main program to test the function pointers.
- `1-array_iterator.c`: Contains a function `array_iterator` that iterates through an array and performs a function on each element.
- `function_pointers.h`: Header file with function prototypes.

**Instructions:**
- Implement a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`.

## Task 2 - Function Pointer for Searching an Integer

### Files:
- `2-main.c`: Main program to test the function pointers.
- `2-int_index.c`: Contains a function `int_index` that searches for an integer in an array using a function pointer.
- `function_pointers.h`: Header file with function prototypes.

**Instructions:**
- Implement a function that searches for an integer in an array using a function pointer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int))`.

## Task 3 - Simple Calculator

### Files:
- `3-main.c`: Main program that performs simple operations.
- `3-op_functions.c`: Contains functions for addition, subtraction, multiplication, division, and modulo.
- `3-get_op_func.c`: Selects the correct function based on the operator.
- `3-calc.h`: Header file with function prototypes and data structures.

**Instructions:**
- Create a program that performs simple mathematical operations.
- Usage: `calc num1 operator num2`
- Supported operators: `+`, `-`, `*`, `/`, `%`.

## Task 4 - Printing OpCodes of Main Function

### Files:
- `100-main_opcodes.c`: Program that prints the opcodes of its own main function.

**Instructions:**
- Create a program that prints the opcodes of its own main function.
- Usage: `./main number_of_bytes`
- Output is in hexadecimal format.
- Handles errors for wrong arguments or negative bytes.

## Compilation

To compile each task, use the provided compilation commands. For example:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o task0

