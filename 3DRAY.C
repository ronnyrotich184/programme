/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO MONITOR REVENUE AND ROOM OCCUPANCY
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main() {
    int chain[BRANCHES][FLOORS][ROOMS];
    int totalOccupied = 0;

    srand(time(NULL)); // Seed for random number generation

    printf("Hotel Chain Room Occupancy Report:\n\n");

    for (int b = 0; b < BRANCHES; b++) {
        printf("Branch %d:\n", b + 1);
        for (int f = 0; f < FLOORS; f++) {
            printf("  Floor %d: ", f + 1);
            for (int r = 0; r < ROOMS; r++) {
                chain[b][f][r] = rand() % 2; // Random 0 or 1
                printf("%d ", chain[b][f][r]);
                if (chain[b][f][r] == 1)
                    totalOccupied++;
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}
