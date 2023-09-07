#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *quote = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";

    /* Write the quote to the standard error */
    fwrite(quote, sizeof(char), strlen(quote), stderr);

    /* Terminate the program with an error status */
    return 1;
}

