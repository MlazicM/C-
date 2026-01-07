// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>
// Include math library
#include <math.h>

int main()
{
    // Declare variables: periods, minutes per period, minutes in seconds, total seconds, match duration
    int periods = 4, minutes = 60, min_per_period = 8, seconds, match_duration;
    // Calculate total minutes in the match (4 periods * 8 minutes per period)
    match_duration = periods * min_per_period;
    // Convert to seconds (total minutes * 60 seconds per minute)
    seconds = match_duration * minutes;
    // Print the match duration in seconds
    printf("The match lasts %d seconds.\n", seconds);
    // Return 0 to indicate successful program execution
    return 0;
}
