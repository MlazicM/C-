#include <stdio.h>
#include <stdlib.h>

/*
 * Program: Sum of the first 10 integers
 * This program calculates the sum of integers from 1 to 10 using a for-loop
 * and prints the result.
 */
int main(void)
{
    /* Accumulator for the sum */
    int i, sum = 0;

    /* Sum numbers from 1 through 10 inclusive */
    for (i = 1; i <= 10; i++)
        sum += i; /* same as sum = sum + i */

    /* Print the result followed by a newline */
    printf("Sum of the first 10 integers is %d\n", sum);

    return 0;
}
