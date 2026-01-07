#include <stdio.h>
#include <stdlib.h>

/*
 * Program: Increment until 200
 * This program starts from 1 and increments a counter until it reaches 200,
 * then prints the final value.
 */
int main(void)
{
    /* Initialize counter to 1 */
    int counter = 1;

    /* Increment until counter is no longer less than 200 */
    while (counter < 200)
        counter++;

    /* Print the final value followed by a newline */
    printf("%d\n", counter);

    return 0;
}
