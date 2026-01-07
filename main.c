#include <stdio.h>
#include <stdlib.h>

/*
 * Program: Print odd numbers less than 50
 * This program uses a simple while loop to print all odd numbers from 1 to 49.
 */
int main(void)
{
    /* Start with the first odd number */
    int odd = 1;

    /* Loop until we reach 50 (exclusive) */
    while (odd < 50)
    {
        /* Print the current odd number followed by a newline */
        printf("%d\n", odd);

        /* Move to the next odd number */
        odd += 2; /* same as odd = odd + 2 */
    }

    /* Return 0 to indicate successful execution */
    return 0;
}
