#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
        /* Use tabs for indentation */
        return write(1, &c, 1);
}
