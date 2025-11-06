/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY EXAMINATIONS RESULTS
*/
#include <stdio.h>
#include <stdlib.h>

// i. Define the structure
typedef struct {
    char name[50];
    char reg_no[20];
    float total_marks;
} Student;

int main() {
    FILE *file;
    Student student;

    // ii. Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // iii. Read and display each student record
    printf("Student Examination Results:\n");
    printf("----------------------------\n");
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Total Marks: %.2f\n", student.total_marks);
        printf("----------------------------\n");
    }

    fclose(file);
    return 0;
}
