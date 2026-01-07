// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>
// Include math library
#include <math.h>

int main()
{
    // Declare variables: hours, minutes, and film duration in seconds
    int hours, minutes, film_duration;
    // Prompt user to enter hours
    printf("Enter how many hours (a) = \n");
    // Read hours from user input
    scanf("%d", &hours);
    // Prompt user to enter minutes
    printf("Enter how many minutes (b) = \n");
    // Read minutes from user input
    scanf("%d", &minutes);
    // Calculate total film duration in seconds (hours*3600 + minutes*60)
    film_duration = hours * 60 * 60 + minutes * 60;
    // Print the film duration in seconds
    printf("The film lasts %d seconds.\n", film_duration);
    // Return 0 to indicate successful program execution
    return 0;
}
