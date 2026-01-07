// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>
// Include math library for pow() and sqrt() functions
#include <math.h>

int main()
{
    // Declare float variables: side_length, perimeter, area, diagonal, semi_perimeter
    float side_length, perimeter, area, diagonal, semi_perimeter;
    // Prompt user to enter the side length
    printf("Enter the side length a = \n");
    // Read the side length from user input
    scanf("%f", &side_length);
    // Calculate perimeter (4 * side length for a square)
    perimeter = 4 * side_length;
    // Calculate area (side length squared)
    area = pow(side_length, 2);
    // Calculate diagonal (side length * square root of 2)
    diagonal = side_length * sqrt(2);
    // Calculate semi-perimeter (perimeter / 2)
    semi_perimeter = perimeter / 2;
    // Check if perimeter equals 20
    if (perimeter == 20)
    {
        // Print the area of the square
        printf("The area of the square is %.2f\n\n", area);
    }
    // Check if perimeter is less than 20
    else if (perimeter < 20)
    {
        // Print the length of the diagonal
        printf("The length of the diagonal is %.2f\n\n", diagonal);
    }
    // Otherwise (perimeter is greater than 20)
    else
    {
        // Print the length of the semi-perimeter
        printf("The length of the semi-perimeter is %.2f\n\n", semi_perimeter);
    }
    // Return 0 to indicate successful program execution
    return 0;
}
