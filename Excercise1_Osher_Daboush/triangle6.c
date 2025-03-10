#include <stdio.h>
#include "main_triangle.h"

void triangle6(int n, char ch) {
    triangle4(n, ch);
    printf("  ");
    triangle5(n - 1, ch);
}
