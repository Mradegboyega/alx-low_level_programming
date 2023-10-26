#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write a character to stdout
 * @c: The character to print
 *
 * Return: On success, the number of characters written is returned.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
