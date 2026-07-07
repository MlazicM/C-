#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int terrain[6][6];
int visited[6][6];
int count_hole(int r, int c) {
    if (r < 0 || r >= 6 || c < 0 || c >= 6) return 0;
    if (terrain[r][c] != 0 || visited[r][c] == 1) return 0;
    visited[r][c] = 1;
    return 1 + count_hole(r - 1, c) +
               count_hole(r + 1, c) +
               count_hole(r, c - 1) +
               count_hole(r, c + 1);
}
int main(void) {
    int i, j, r, c;
    int hole_count = 0;
    int surrounded_hole = 0;
    int largest_hole = 0;
    int path = 0;
    srand(time(NULL));
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            terrain[i][j] = rand() % 2;
        }
    }
    printf("Terrain (0 - hole, 1 - concrete):\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("%3d", terrain[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(terrain[i][j] == 0) {
                hole_count++;
            }
        }
    }
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(terrain[i][j] == 0) {
                int all_concrete = 1;
                for(r = i - 1; r <= i + 1; r++) {
                    for(c = j - 1; c <= j + 1; c++) {
                        if(r >= 0 && r < 6 && c >= 0 && c < 6) {
                            if(!(r == i && c == j) && terrain[r][c] == 0) {
                                all_concrete = 0;
                            }
                        }
                    }
                }
                if(all_concrete == 1) {
                    surrounded_hole = 1;
                }
            }
        }
    }
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            visited[i][j] = 0;
        }
    }
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(terrain[i][j] == 0 && visited[i][j] == 0) {
                int current_size = count_hole(i, j);
                if(current_size > largest_hole) {
                    largest_hole = current_size;
                }
            }
        }
    }
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(terrain[i][j] == 1) {
                path++;
            } else {
                i = 6;
                break;
            }
        }
    }
    printf("\n1. Total holes on the terrain: %d\n", hole_count);
    if(surrounded_hole == 1) {
        printf("2. Is there a hole completely surrounded by concrete: YES\n");
    } else {
        printf("2. Is there a hole completely surrounded by concrete: NO\n");
    }
    printf("3. The largest connected hole size is: %d fields\n", largest_hole);
    printf("4. The player covers %d fields before falling into a hole\n", path);
    return 0;
}
