// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>

int main()
{
    // Declare integer variable to store the number
    int number;
    // Prompt user to enter a number
    printf("Enter a number x = ");
    // Read the number from user input
    scanf("%d", &number);
    // Check if the number is NOT divisible by 8 (x%8 returns non-zero if not divisible)
    if (number % 8)
    {
        // Print message if number is not divisible by 8
        printf("The entered number is not divisible by 8.\n\n");
    }
    // Otherwise the number is divisible by 8
    else
    {
        // Print message if number is divisible by 8
        printf("The entered number is divisible by 8.\n\t");
    }
    // Return 0 to indicate successful program execution
    return 0;
}
