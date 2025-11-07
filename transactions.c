/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY DAILY SALES TRANSACTONS
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // i. Open the file for reading
    file = fopen("D://C files//sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    // ii. Read each transaction and calculate the total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // iii. Close the file
    fclose(file);

    // Display the total sales
    printf("Total sales for the day: %.2f\n", total);

    return 0;

}
