#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i,j,x[10];
    srand(time(0));
    for(i=0;i<10;i++)
    {
        x[i]=rand()%100;
    }
    printf("Array looks like this:\t\n");
    for(j=0;j<10;j++)
        {
           printf("\nElement[%d]=%d", j,x[j]);
        }
    //position of smallest number
    int smallestIndex=0;
    for(i=0;i<10;i++) {
        if(x[i]<x[smallestIndex])
            smallestIndex = i;
    }
    int *pointer =&x[smallestIndex];
    printf("\nSmallest number is :%d", *pointer);
    printf("\nIndex of smallest number: %d", smallestIndex);
    printf("\nAddres of smallest number: %p", (void*)pointer);
    return 0;
}

