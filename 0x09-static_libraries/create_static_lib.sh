#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a from all generated object files
ar rcs liball.a *.o

# Clean up by removing the object files
#rm -f *.o
