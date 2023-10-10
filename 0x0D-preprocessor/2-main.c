#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function prints the name of the file it was compiled from.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("%s\n", __FILE__);  /* Print the name of the source file */
    return (0);
}
