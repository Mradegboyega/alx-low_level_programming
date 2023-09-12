#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long int first = 1, second = 2, next, sum = 0;

    while (second <= 4000000)
    {
        if (second % 2 == 0)
        {
            sum += second;
        }
        next = first + second;
        first = second;
        second = next;
    }

    printf("%ld\n", sum);

    return (0);
}

