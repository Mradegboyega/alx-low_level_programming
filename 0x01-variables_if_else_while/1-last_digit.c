#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int lastDigit;  /* Declare lastDigit before any executable statements */
    
    srand(time(0));  /* Seed the random number generator with the current time */

    n = rand() - RAND_MAX / 2; /* Assign a random number to n */

    lastDigit = n % 10; /* Calculate the last digit of n */

    /* Print the messages based on the last digit of n */
    printf("Last digit of %d is %d", n, lastDigit);

    if (lastDigit > 5)
    {
        printf(" and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf(" and is 0\n");
    }
    else
    {
        printf(" and is less than 6 and not 0\n");
    }

    return 0;
}

