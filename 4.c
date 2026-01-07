// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>

int main()
{
    // Declare variables for days, hours, minutes, and seconds
    int days, hours, minutes, seconds;
    // Prompt user to enter number of days
    printf("Enter the number of days\n");
    // Read the number of days from user input
    scanf("%d", &days);
    // Convert days to hours (1 day = 24 hours)
    hours = days * 24;
    // Convert hours to minutes (1 hour = 60 minutes)
    minutes = hours * 60;
    // Convert minutes to seconds (1 minute = 60 seconds)
    seconds = minutes * 60;
    // Print the converted values for hours, minutes, and seconds
    printf("That is exactly %d hours, exactly %d minutes and exactly %d seconds\n", hours, minutes, seconds);
    // Return 0 to indicate successful program execution
    return 0;
}
