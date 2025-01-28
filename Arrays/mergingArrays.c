#include <stdio.h>

#define SIZE 5

void ReadArray(int a[], int size);
void PrintArray(int a[], int b[], int size);

int main() {
    int a[SIZE];
    int b[SIZE];

    ReadArray(a, SIZE);
    ReadArray(b, SIZE);
    PrintArray(a, b, SIZE);

    return 0;
}

void ReadArray(int a[], int size) {
    printf("Enter %d integer numbers:\n", size);

    for (int i = 0; i < size; i++) {
        printf("Enter number %3d: ", i + 1);
        // Validate input
        while (scanf("%d", &a[i]) != 1) {
            printf("Invalid input. Please enter an integer: ");
            while (getchar() != '\n'); // Clear the input buffer
        }
    }
}

void PrintArray(int a[], int b[], int size) {
    int i = 0, j = 0;

    printf("\nMerging the 2 lists results in:\n");

    // Merge arrays
    while (i < size && j < size) {
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            ++i;
        } else {
            printf("%d ", b[j]);
            ++j;
        }
    }

    // Print remaining elements from `a`
    while (i < size) {
        printf("%d ", a[i]);
        ++i;
    }

    // Print remaining elements from `b`
    while (j < size) {
        printf("%d ", b[j]);
        ++j;
    }

    putchar('\n'); // Print a newline
}
