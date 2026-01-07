// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>
// Include math library
#include <math.h>

int main()
{
    // Declare variables: minutes per quarter (10), number of quarters (4), total seconds
    int minutes_per_quarter = 10, quarters = 4, total_seconds;
    // Ask the user how many seconds the basketball game lasted without stoppages
    printf("How many seconds did the basketball game last without stoppage time?\n");
    // Calculate total seconds (10 minutes * 4 quarters * 60 seconds per minute)
    total_seconds = minutes_per_quarter * quarters * 60;
    // Print the total game duration in seconds
    printf("The game lasted %d seconds.", total_seconds);
    // Return 0 to indicate successful program execution
    return 0;
}
