#include <stdio.h>
#include <stdlib.h>

/*
 * Program: Grades summary
 * Reads 12 integer grades from the user, computes the average, and
 * counts how many grades are equal to 5.
 */
int main(void)
{
    /* brp: count of grade 5; o: current grade; z: sum of grades; i: loop index */
    int brp = 0, o, z = 0, i;
    float average;

    /* Read 12 grades */
    for (i = 1; i <= 12; i++)
    {
        printf("Enter grade for subject %d: ", i);
        scanf("%d", &o);
        z += o;
        if (o == 5)
            brp++;
    }

    /* Compute average using floating-point division */
    average = (float)z / 12.0f;

    /* Print results */
    printf("\nAverage of all grades is %.2f\n", average);
    printf("Number of grade 5s is %d\n", brp);

    return 0;
}
