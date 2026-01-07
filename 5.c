// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>

int main()
{
    // Declare variables: playing_time (45 minutes), stoppage_time (3 minutes), total seconds
    int playing_time = 45, stoppage_time = 3, total_seconds;
    // Inform user about the game duration breakdown
    printf("The half lasted 45 minutes, and stoppage time was 3 more minutes.\n");
    // Calculate total seconds (playing time + stoppage time) * 60 seconds per minute
    total_seconds = (playing_time + stoppage_time) * 60;
    // Print the total duration of the half in seconds
    printf("The total half lasted %d seconds.", total_seconds);
    // Return 0 to indicate successful program execution
    return 0;
}
