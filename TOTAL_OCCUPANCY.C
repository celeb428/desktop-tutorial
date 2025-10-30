//
/*
name:caleb ngugi
reg:CT100/G/26188/25
descrition:TOTAL ROOM OCCUPIED
date:30/10/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int i, j, k, occupied, totalOccupied = 0;

    srand(time(0)); 

    printf("=== Hotel Chain Occupancy (3 Branches) ===\n");

    
    for (i = 0; i < 3; i++) { 
        printf("\nBranch %d:\n", i + 1);
        for (j = 0; j < 5; j++) { 
            occupied = 0;
            for (k = 0; k < 10; k++) { 
                chain[i][j][k] = rand() % 2;
                if (chain[i][j][k] == 1)
                    occupied++;
            }
            printf("  Floor %d -> Occupied Rooms: %d\n", j + 1, occupied);
            totalOccupied += occupied;
        }
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}
