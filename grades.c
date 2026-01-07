// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>

int main()
{
    // Declare float variable to store points
    float points;
    // Prompt user to enter the points
    printf("Enter the number of points p = ");
    // Read points from user input
    scanf("%f", &points);
    // Check if points are in the range for failing grade (0-40)
    if (points >= 0 && points <= 40)
    {
        // Print failing grade message
        printf("The student received a failing grade.");
    }
    // Check if points are in the range for grade 2 (41-64)
    else if (points >= 41 && points <= 64)
    {
        // Print grade 2 message
        printf("The student received a grade of 2");
    }
    // Check if points are in the range for grade 3 (65-77)
    else if (points >= 65 && points <= 77)
    {
        // Print grade 3 message
        printf("The student received a grade of 3");
    }
    // Check if points are in the range for grade 4 (78-89)
    else if (points >= 78 && points <= 89)
    {
        // Print grade 4 message
        printf("The student received a grade of 4");
    }
    // Check if points are in the range for grade 5 (90-100)
    else if (points >= 90 && points <= 100)
    {
        // Print grade 5 (highest) message
        printf("The student received a grade of 5");
    }
    // Otherwise (points are out of valid range)
    else
    {
        // Print invalid points message
        printf("The entered number of points is not valid");
    }
    // Return 0 to indicate successful program execution
    return 0;
}
