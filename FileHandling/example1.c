#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Name: Osher Daboush\nAge: 31\n"); // Write formatted data
    fclose(file); // Close file after writing

    // Reopen the file for reading
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error Opening File.\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, 100, file)) { // Read one line at a time
        printf("%s", buffer); // Print the line to the console
    }

    fclose(file); // Close file after reading
    return 0;
}
