#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}



