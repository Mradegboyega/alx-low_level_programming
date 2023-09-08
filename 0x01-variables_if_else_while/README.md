# C Programs Summary

This repository contains a collection of C programs that demonstrate various concepts and tasks. Each program is designed to fulfill specific requirements and constraints.

## Programs

1. **0-positive_or_negative.c**
   - Description: Assigns a random number to a variable and prints whether the number is positive, negative, or zero.
   - Features: Uses `srand` and `rand` to generate random numbers.

2. **1-last_digit.c**
   - Description: Assigns a random number to a variable and prints its last digit, along with its properties (greater than 5, equal to 0, or less than 6 and not 0).
   - Features: Uses `srand` and `rand` to generate random numbers.

3. **2-print_alphabet.c**
   - Description: Prints the lowercase alphabet followed by a newline.
   - Features: Utilizes a `while` loop to iterate through the alphabet.

4. **3-print_alphabets.c**
   - Description: Prints the lowercase alphabet followed by the uppercase alphabet, each followed by a newline.
   - Features: Uses `while` loops to iterate through the alphabets.

5. **4-print_alphabt.c**
   - Description: Prints the lowercase alphabet, excluding 'q' and 'e', followed by a newline.
   - Features: Utilizes a `while` loop to iterate through the alphabet.

6. **5-print_numbers.c**
   - Description: Prints all single-digit numbers (0-9) followed by a newline.
   - Features: Uses a `for` loop to iterate through digits.

7. **6-print_numberz.c**
   - Description: Prints all single-digit numbers (0-9) without using character variables, followed by a newline.
   - Features: Uses a `for` loop to iterate through digits.

8. **7-print_tebahpla.c**
   - Description: Prints the lowercase alphabet in reverse order, followed by a newline.
   - Features: Uses a `while` loop to iterate in reverse.

9. **8-print_base16.c**
   - Description: Prints all hexadecimal digits (0-9 and a-f) followed by a newline.
   - Features: Uses a `for` loop to iterate through digits.

10. **9-print_comb.c**
    - Description: Prints all possible combinations of single-digit numbers separated by ", ", in ascending order.
    - Features: Uses a `for` loop and conditional statements to format output.

11. **10-print_comb2.c**
    - Description: Prints all possible combinations of two two-digit numbers (00-99) in ascending order, separated by ", ".
    - Features: Utilizes nested `for` loops and conditional statements.

12. **11-print_to_98.c**
    - Description: Prints all numbers from a given number to 98, inclusive, separated by commas, followed by a newline.
    - Features: Handles both ascending and descending sequences.

13. **12-natural_numbers.c**
    - Description: Prints the sum of all natural numbers below a given number that are multiples of 3 or 5.
    - Features: Uses a `for` loop and conditional statements.

## Usage

To compile and run any of the programs, use the following commands:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <program_name.c> -o <output_name>
./<output_name>

