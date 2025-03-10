#include <stdio.h>

void triangle2(int n, char ch) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= i; --j) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}
