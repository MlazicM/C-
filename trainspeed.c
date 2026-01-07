// Include standard input/output library
#include <stdio.h>
// Include standard library
#include <stdlib.h>

int main()
{
    // Declare float variables for train speed, train distance, car speed, car distance, train time, car time
    float train_speed, train_distance, car_speed, car_distance, train_time, car_time;
    // Prompt user to enter train speed and distance traveled
    printf("Enter how fast the train is moving and how many kilometers it traveled x = y = ");
    // Read train speed and distance from user input
    scanf("%f %f", &train_speed, &train_distance);
    // Prompt user to enter car speed and distance traveled
    printf("Enter how fast the car is moving and how many kilometers it traveled t = l = ");
    // Read car speed and distance from user input
    scanf("%f %f", &car_speed, &car_distance);
    // Calculate train travel time (distance / speed)
    train_time = train_distance / train_speed;
    // Calculate car travel time (distance / speed)
    car_time = car_distance / car_speed;
    // Check if train time is greater than car time (car is faster)
    if (train_time > car_time)
    {
        // Print message if car arrives faster
        printf("The car arrives faster.");
    }
    // Check if train time equals car time (they arrive at the same time)
    else if (train_time == car_time)
    {
        // Print message if they arrive at the same speed
        printf("They arrive equally fast.");
    }
    // Otherwise train time is less than car time (train is faster)
    else
    {
        // Print message if train arrives faster
        printf("The train arrives faster.");
    }
    // Return 0 to indicate successful program execution
    return 0;
}
