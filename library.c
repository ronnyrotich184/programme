/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY TRACKS OF BORROWED BOOKS
*/
#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>

int main() {
    char title[256];
    FILE *file;

    // Open the file in append mode so existing records are preserved
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Prompt the librarian to enter a book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);  // Read the title including spaces

    // Write the title to the file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    // Display confirmation
    printf("The title \"%s\" has been successfully stored.\n", title);

    return 0;}