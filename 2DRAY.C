/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO MONITOR REVENUE AND ROOM OCCUPANCY
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[FLOORS][ROOMS];
    int occupied, vacant;

    srand(time(NULL)); // Seed random number generator

    printf("Room Occupancy Report (1 = Occupied, 0 = Vacant):\n\n");

    for (int floor = 0; floor < FLOORS; floor++) {
        occupied = vacant = 0;
        printf("Floor %d: ", floor + 1);
        for (int room = 0; room < ROOMS; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1
            printf("%d ", occupancy[floor][room]);
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("\n  ? Occupied: %d, Vacant: %d\n\n", occupied, vacant);
    }

    return 0;
}

