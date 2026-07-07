#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, j, posx = 0, posy = 0, min;
    int x[5][5];
    srand(time(0));
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            x[i][j] = rand() % 100 + 1;
        }
    }
    min = x[0][0];
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%5d", x[i][j]);
            if(x[i][j] < min) {
                min = x[i][j];
                posx = i;
                posy = j;
            }
        }
        printf("\n");
    }
    printf("\n\nSmallest number is: %d on position [%d][%d]\n", min, posx, posy);
    return 0;
}
