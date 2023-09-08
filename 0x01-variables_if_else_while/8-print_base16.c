#include <stdio.h>

int main(void)
{
    char hexDigit;

    for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
    {
        putchar(hexDigit);
    }

    for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
    {
        putchar(hexDigit);
    }

    putchar('\n'); /* Print a newline character to end the line */

    return 0;
}

