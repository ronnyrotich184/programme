/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO MONITOR REVENUE AND ROOM OCCUPANCY
*/
#include <stdio.h>

int main() {
    float revenue[7];  // Array to store revenue for 7 days
    float total = 0.0, average;

    printf("Enter the revenue for each day of the week:\n");

    // Input revenue for each day
    for (int i = 0; i < 7; i++) {
        printf("Day %d: $", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Accumulate total revenue
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue: $%.2f\n", total);
    printf("Average Daily Revenue: $%.2f\n", average);

    return 0;
}
