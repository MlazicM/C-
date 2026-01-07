// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>

int main()
{
    // Declare variables: seconds for total seconds, m for minutes, day for hours
    int seconds, m = 60, day = 24;
    // Calculate total seconds in a day (60 minutes * 60 seconds * 24 hours)
    seconds = m * m * day;
    // Print the result to the console
    printf("One day has %d seconds.\n", seconds);
    // Return 0 to indicate successful program execution
    return 0;
}
