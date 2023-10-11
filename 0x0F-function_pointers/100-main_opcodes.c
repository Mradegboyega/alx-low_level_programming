#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 (Success), 1 (Wrong number of arguments), 2 (Negative number of bytes).
 */
int main(int argc, char *argv[])
{
    int bytes, i;

    if (argc != 2)
    {
        /* Print an error message */
        fprintf(stderr, "Error\n");
        return (1);  /* Wrong number of arguments */
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        /* Print an error message */
        fprintf(stderr, "Error\n");
        return (2);  /* Negative number of bytes */
    }

    unsigned char *addr = (unsigned char *)&main;

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", addr[i]);
        if (i < bytes - 1)
            printf(" ");
    }
    printf("\n");

    return (0);  /* Success */
}
