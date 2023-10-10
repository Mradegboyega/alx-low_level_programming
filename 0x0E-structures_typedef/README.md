C Programming - Structures and Typedef

This repository contains a set of C programs that demonstrate the usage of structures and typedef in C programming. Each program corresponds to a specific task and showcases different aspects of working with structures and typedef in C.
Table of Contents

    Task 1: Define a struct
    Task 2: Initialize a struct
    Task 3: Print a struct
    Task 4: Define a new type
    Task 5: Create a new struct
    Task 6: Free memory

Task 1: Define a struct

In this task, a new type struct dog is defined with three elements: name (a string), age (a float), and owner (a string).
Task 2: Initialize a struct

A function init_dog is implemented to initialize a variable of type struct dog with provided values for name, age, and owner.
Task 3: Print a struct

A function print_dog is created to print the details of a struct dog. If any element is NULL, it prints "(nil)" for that element.

Task 4: Define a new type

A new type dog_t is defined as an alias for the type struct dog.

Task 5: Create a new struct

A function new_dog is implemented to create a new struct dog with copies of name and owner strings. It returns a pointer to the new struct or NULL if memory allocation fails.

Task 6: Free memory

A function free_dog is provided to free the memory allocated for a struct dog created using new_dog.
Usage

Each task is accompanied by its own set of source code files (main.c, dog.h, and function files) that demonstrate the respective functionality. You can compile and run each task individually by following the instructions in their respective READMEs.
