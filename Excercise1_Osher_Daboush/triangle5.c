#include <stdio.h>

void triangle5(int n, char ch) {
    int baseLength = 2 * n - 1;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= baseLength - (2 * i - 1); j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
            if (j != 2 * i - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }
}

