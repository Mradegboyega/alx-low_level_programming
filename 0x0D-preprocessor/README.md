# C Programming Tasks - README

This README provides a concise overview of the C programming tasks that have been solved along with their solutions.

## Task 0: Define a Macro for SIZE

**Description:** This task required the creation of a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

**Solution:**
```c
#ifndef SIZE
#define SIZE 1024
#endif

Task 1: Define a Macro for PI

Description: In this task, a header file was created that defines a macro named PI as an abbreviation for the token 3.14159265359.

Solution:
```c
#ifndef PI
#define PI 3.14159265359
#endif

Task 2: Define a Macro for Absolute Value

Description: For this task, a function-like macro named ABS(x) was defined to compute the absolute value of a number x.

Solution:
```c
#ifndef ABS
#define ABS(x) ((x) < 0 ? -(x) : (x))
#endif

Task 3: Define a Macro for Sum

Description: This task required defining a function-like macro named SUM(x, y) to compute the sum of two numbers x and y.

Solution:
```c
#ifndef SUM
#define SUM(x, y) ((x) + (y))
#endif

Task 4: Print the File Name

Description: In this task, a program was created to print the name of the file it was compiled from.

Solution:

```c

#include <stdio.h>

int main(void) {
    printf("%s\n", __FILE__);
    return 0;
}


This single-file README provides an overview of each task and how it was solved without including the main file code.

