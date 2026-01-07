#include <stdio.h>
#include <stdlib.h>

/*
 * Program: Compute x = (2 * min) / (max + 1)
 * This program reads two floating-point numbers from the user,
 * determines the smaller and larger value, computes x according to
 * the formula above, and prints the result.
 */
int main(void)
{
    float num1, num2, minVal, maxVal, x;

    /* Prompt and read the first number */
    printf("Enter number a: ");
    if (scanf("%f", &num1) != 1)
    {
        fprintf(stderr, "Invalid input for a\n");
        return EXIT_FAILURE;
    }

    /* Prompt and read the second number */
    printf("Enter number b: ");
    if (scanf("%f", &num2) != 1)
    {
        fprintf(stderr, "Invalid input for b\n");
        return EXIT_FAILURE;
    }

    /* Determine minimum and maximum values */
    if (num1 > num2)
    {
        minVal = num2;
        maxVal = num1;
    }
    else
    {
        minVal = num1;
        maxVal = num2;
    }

    /* Check for a potential division by zero when maxVal == -1 */
    if (maxVal == -1.0f)
    {
        fprintf(stderr, "Error: division by zero (max + 1 == 0)\n");
        return EXIT_FAILURE;
    }

    /* Compute x and print the result */
    x = (2.0f * minVal) / (maxVal + 1.0f);
    printf("x = %f\n", x);

    return EXIT_SUCCESS;
}
