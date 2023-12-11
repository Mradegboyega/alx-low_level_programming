#!/bin/bash

# Compile all C files into position-independent code (PIC)
gcc -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

