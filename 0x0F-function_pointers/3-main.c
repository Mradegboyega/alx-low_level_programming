#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 if successful, otherwise exit status.
 */
int main(int argc, char *argv[])
{
    int a, b;
    int result;
    int (*calc_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    calc_func = get_op_func(argv[2]);

    result = calc_func(a, b);

    printf("%d\n", result);

    return (0);
}
