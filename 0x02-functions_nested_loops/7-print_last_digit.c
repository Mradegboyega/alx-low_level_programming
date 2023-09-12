#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: The integer to get the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit = n % 10; /* Get the last digit */

    if (last_digit < 0)
        last_digit = -last_digit; /* Make sure it's positive */

    _putchar(last_digit + '0'); /* Print the last digit */
    return last_digit;
}

