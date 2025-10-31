 /*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY FARE DISTANCE
*/
#include <stdio.h>

int calculateFare(int distance) {
    int fare = distance * 50;
    return fare;
}

int main() {
    int distance;
    printf("Enter distance traveled (in kilometers): ");
    scanf("%d", &distance);

    int totalFare = calculateFare(distance);
    printf("Total fare: KSh. %d\n", totalFare);

    return 0;
}