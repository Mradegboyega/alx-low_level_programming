This README provides an overview of the scripts and C programs created during the interactions.
Table of Contents

    Scripts
        0-preprocessor
        compile_without_linking
        compile_and_create_executable
        generate_intel_assembly
        quote
    C Programs
        4-puts.c
        5-printf.c
        6-size.c
        101-quote.c

Scripts
0-preprocessor

    Description: This script takes a C file as input (provided in the $CFILE variable) and runs it through the C preprocessor. The preprocessed output is saved in a file named c.

compile_without_linking

    Description: This script compiles a C file without linking. It takes a C file as input (provided in the $CFILE variable) and compiles it, saving the object file with a .o extension.

compile_and_create_executable

    Description: This script compiles a C file and creates an executable named cisfun. It takes a C file as input (provided in the $CFILE variable) and compiles it, creating an executable named cisfun.

generate_intel_assembly

    Description: This script generates Intel syntax assembly code from a C file and saves it in an output file with a .s extension. It takes a C file as input (provided in the $CFILE variable) and generates the assembly code using the -masm=intel option.

quote

    Description: This script prints a specific message to the standard error without using printf or puts. It utilizes the write function to write the message directly to the standard error.

C Programs
4-puts.c

    Description: This C program prints the message "Programming is like building a multilingual puzzle" using the puts function. It ends with a return value of 0.

5-printf.c

    Description: This C program prints the message "with proper grammar, but the outcome is a piece of art," using the printf function. It ends with a return value of 0.

6-size.c

    Description: This C program prints the sizes of various data types using the sizeof operator. It provides the sizes of char, int, long int, long long int, and float data types.

101-quote.c

    Description: This C program prints a specific message to the standard error without using the printf or puts functions. It utilizes the write function to write the message directly to the standard error and returns a value of 1.
