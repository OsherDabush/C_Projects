#include <stdio.h>

void triangle3(int n, char ch) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                printf("%c ", ch);
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}

